//acmicpc 22862
//authored by jihwankim
//23-07-12 AM 04:22

#include <bits/stdc++.h>

using namespace std;

int arr[1000001];
int n, k;

void input() {
	cin >> n >> k;
	for(int i = 0; i<n; i++) 
		cin >> arr[i];
}

void solve() {
	
	int left = 0, right = 0;
	int length = 0, cnt = 0;
	int max_len = 0;
	
	for(left, right; right<n; right++) {
		if(arr[right] % 2) {
			//Ȧ���� ���
			//Ȧ������ ������ k�� ���ٸ� ���� Ȧ�������� ���� 
			while(cnt == k) {
				if(arr[left++]%2) cnt--;
				else length--;
			}
			cnt++;
		}
		else {
			//¦���� ��� 
			length++;
		}
		max_len = max(max_len, length);
	}
	
	cout << max_len;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
		
	return 0;
}

//AM 04:41
