// acmicpc 7785
// authored by jihwankim
// 23-07-22 AM 10:37
#include <bits/stdc++.h>

using namespace std;

int n;
unordered_map<string, bool> m;

void input() {
	cin >> n;
	string name;
	string status;
	for(int i =0; i<n; i++) {
		cin >> name >> status;
		if(status == "enter") m[name] = true;
		else m[name] = false;
	}
}

void solve() {
	vector<string> name;
	// pair<string, bool> &s �� �ȵ�.
	// pair�� pair<const Key, T>�� ���ø��� ������ ����.
	// ��� ���·� �����Ƿ� auto�� ����ؾ� �ּҰ� ���� ����. 
	for(auto &s : m) {
		if(s.second == true) name.push_back(s.first);
	}
	// lambda, greater<string 
	sort(name.begin(), name.end(), [](string &a, string &b) { return a > b; });
	for(string &s : name) cout << s << "\n";
}

/*  �ܼ� ���� 
int n;
pair<string, bool> arr[1000005];

void input() {
	cin >> n;
	for(int i =0; i<n; i++) {
		string status;
		cin >> arr[i].name >> status;
		if(status == "enter") arr[i].status = true;
		else arr[i].status = false;
	}
	sort(arr, arr+n);
}

bool cmp(string &a, string &b) {
	return a > b;
}
void solve() {
	vector<string> person;
	string name = arr[0].name;
	int cnt = 0;
	for(int i = 0; i<n; i++) {
		if(arr[i].name != name) {
			if(cnt > 0) person.push_back(name);
			cnt = 0;
			name = arr[i].name;
		}
		if(arr[i].status) cnt++;
		else cnt--;
	}
	if(cnt > 0) person.push_back(name);
	
	sort(person.begin(), person.end(), cmp);
	
	for(string s : person) cout << s << "\n";
} */

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

// AM 10:51
