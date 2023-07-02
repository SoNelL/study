//23-06-30 PM 06:04
//authored by jihwankim
#include <bits/stdc++.h>

using namespace std;

int n, l, r;
int maps[51][51];    			 //input
bool visited[51][51]; 			 //�湮ó�� 
vector<pair<int, int> > coor;	 //�湮�� ��ü ��ǥ 
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

// size, �ּ���, �ִ���, �α� 
void input() {
	cin >> n >> l >> r;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cin >> maps[i][j];
		}
	}
}

// ����, �湮 chk 
bool valid(int &x, int &y) {
	if(x < 0 || x >= n) return true;
	if(y < 0 || y >= n) return true;
	if(visited[x][y]) return true;
	return false;
}

// �α� �̵� ������ ��� �� 
void moves(vector<pair<int, int> > &v, int sum) {
	for(int i = 0; i<v.size(); i++) {
		maps[v[i].first][v[i].second] = sum;
	}
}

//������ 
void print() {
	cout << "\n";
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cout << maps[i][j] << " ";
		}
		cout << "\n";
	}
}


bool bfs(int a, int b) {
	queue<pair<int, int> > q;	// bfs�� 
	vector<pair<int, int> > v;	// �α��̵� ��� �� �־��� ��ǥ���� 
	v.push_back({a, b});
	q.push({a, b});
	coor.push_back({a, b});		// visited �ʱ�ȭ �ϱ� ���� ��ǥ 
	visited[a][b] = true;
	int sum = maps[a][b];		// �α��̵� ���� ���� �� �α��� 
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(int i = 0; i<4; i++) {
			int nx = x+dx[i];
			int ny = y+dy[i];
			
			// bfs �������� üũ 
			if(valid(nx, ny)) continue; 
			
			//�� ������ �α����� ������ �����ϴ��� üũ 
			int diff = abs(maps[x][y] - maps[nx][ny]);
			if(diff < l || diff > r) continue;
			
			visited[nx][ny] = true;
			
			sum += maps[nx][ny];
			coor.push_back({nx, ny});
			v.push_back({nx, ny});
			q.push({nx, ny});
		}
	}
	
	// �α��̵� ������ ������ 2�� �̻��� �� �̵��ؾ���. 
	if(v.size() > 1) {
		moves(v, sum/v.size());
		return true;
	}
	
	//v.size() == 1, �α� �̵� �Ұ���. �׷��� 0 ���� 
	return false;
}

//visited �ʱ�ȭ  
void clear() {
	for(int i= 0; i<coor.size(); i++) {
		visited[coor[i].first][coor[i].second] = false;
	}
	coor.clear();
}

void solve(int k) {
	int cnt = 0;
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			//�湮 ���� ���� �� �� �α��̵� �� �� �ִ� ���̸�
			//cnt ++ 
			if(!visited[i][j]) {
				cnt += bfs(i, j);
			}
		}
	}
	
	//�α� �̵��� ������ ���� �α� �̵��� ���� visited �ʱ�ȭ 
	clear();
	//print();
	
	//�α��̵� �� ���� ������ - ���� ������ 
	if(cnt == 0) {
		cout << k;
		return;
	}
	
	// k+1 ��° �α��̵��� �������� üũ 
	solve(k+1);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(0);
	
	return 0;
}
//06:42
