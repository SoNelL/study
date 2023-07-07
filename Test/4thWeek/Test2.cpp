//4th test
//23-07-07 PM 06:24
//authored by jihwankim

#include <bits/stdc++.h>

using namespace std;

int n;
int arr[10001];
int dp[10001];
int maxD = 0;

void input() {
	cin >> n;
	for(int i = 1; i<=n; i++) cin >> arr[i];
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	maxD = max(dp[1], dp[2]); 
}

void solve() {
	for(int i = 3; i<=n; i++) {
		dp[i] = max(dp[i-2], dp[i-3] + arr[i-1]);
		dp[i] += arr[i];
		dp[i] = max(dp[i], dp[i-1]);
		maxD = max(maxD, dp[i]);
 	}
 	cout << maxD;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input(); 
	solve();
	
	return 0;
}


/*
���� 3�� �Ұ�
n��°�� n-1�� ���� ��Ű�°�?
0 6 10 = 16
0 6 10 13 = 23 
n-3��°�� ������ ���� ������.
n-3 + n-2 + n �� ���� �� ����.
n-2 �� n-3�� ���ӵ� �� ���̹Ƿ� n-2�� ������. 
-> n-2 + n
n-3 + n-1 + n �� ���� �� ����.  
dp[n]�� ������ �Ƿ��� dp[n-1]�� ���ؾ���.
-> ��������� ������ �ƴ϶�
-> ������ �����̱� ���� 
*/

//PM 06:39 
