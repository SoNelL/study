// acmicpc 17478
// authored by jihwankim
// 23-08-23 AM 03:53
#include <bits/stdc++.h>

using namespace std;

int n;

void solve(int k) {
	if(k > n) return;
	string str;
	for(int i = 0; i<k; i++) str+="____";
	cout << str << "\"����Լ��� ������?\"\n";
	if(k == n) cout << str << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n"; 
	else {
		cout << str << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		cout << str << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		cout << str << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
	}
	solve(k+1);
	cout << str << "��� �亯�Ͽ���.\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> n;	
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	solve(0);
	
	return 0;
}
// AM 04:00
