//23-06-30 PM 06:27
//authored by jihwankim
#include <bits/stdc++.h>

using namespace std;

int n; 
int arr[10001]; 	// A_i ���� �ִ� 1��, counting Sort 

void input() {
	cin >> n;
	int num;
	for(int i = 0; i<n; i++) {
		cin >> num;
		arr[num]++;
	}
}

void solve() {
	//������ 1�� ���� ���� �������� ������ 1������ �ݺ� 
	for(int i = 1; i<=10000; i++) {
		//�ش� ���ڰ� �����Ѵٸ� ��� 
		while(arr[i]) {
			cout << i << "\n";
			arr[i]--;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

// PM 06:40
