// acmicpc.net/problem/6549
// ���ƽý� ����� 
// author : kimjihwan
// 2023-05-24 PM 02:15 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define x first
#define y second

using namespace std;

typedef long long ll;

int n;
stack<pair<int, int> > st;
ll minSize = LONG_MAX;
ll maxSize = 0;

void solve(int h, int w) {
    int range = w;
    minSize = min(minSize, (ll)h);
    while(!st.empty() && st.top().x >= h) {
        // �ְ� �� ����
        maxSize = max(maxSize, (ll)st.top().x * (range - st.top().y));
        // h�̻� �̶�� h�� ���� �� �����Ƿ� h�� w�� st.top().y���� ����
        w = st.top().y; 
        st.pop();
    }
    st.push({h, w});
} 

void emptySolve() {
    while(!st.empty()) {
        maxSize = max(maxSize, (ll)st.top().x * (n-st.top().y+1));
        st.pop();
    }
}

bool input() {
   cin >> n;
   if(n == 0) return false;
   int h;
   for(int i = 1; i<=n; i++) {
      cin >> h;
      solve(h, i);
   }
   if(!st.empty()) emptySolve();
   maxSize = max(maxSize, minSize*n);
   return true;
} 

int main()
{
    fastio;
    while(input()) {
    	cout << maxSize << "\n";
		minSize = LONG_MAX;
		maxSize = 0;	
	}
    
    return 0;
}

// PM 3:27
