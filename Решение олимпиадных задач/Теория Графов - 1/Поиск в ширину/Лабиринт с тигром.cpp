#include <bits/stdc++.h>

using namespace std;

int n, m;
char labyrinth[1002][1002];
int bfs(int i, int j) {
	int dy[] = {0,0,-1,+1};
	int dx[] = {-1,+1,0,0};

	queue<pair<int,int>> q;
	bool visited[n][m];
	int distanse[n][m];
	
	memset(visited, 0x0, sizeof visited);
	memset(distanse, 0x0, sizeof distanse);

	q.push({i, j});
	visited[i][j] = true;
	while(!q.empty()) {
		pair<int,int> s = q.front();
		q.pop();
		for(int i = 0; i < 4; ++i) {
			pair<int,int> v = {s.first + dy[i], s.second + dx[i]};
			if(v.first < 0 || v.first >= n || v.second < 0 || v.second >= m)
				continue;
			if(labyrinth[v.first][v.second] == '#')
				continue;
			if(visited[v.first][v.second])
				continue;

			visited[v.first][v.second] = true;
			distanse[v.first][v.second] = distanse[s.first][s.second] + 1;
			q.push(v);

		}
	}

	return distanse[n - 2][m - 2];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	
	pair<int,int> Tiger;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			cin >> labyrinth[i][j];
			if(labyrinth[i][j] == 'T')
				Tiger = {i,j};
		}
	}

	int shortPathTiger = bfs(Tiger.first, Tiger.second);
	int shortPathSlave = bfs(1,1); // slave garantin 1.1 ? and exit ?

	cout << shortPathSlave << "\n";
	if(shortPathTiger == 0 || shortPathSlave < shortPathTiger) { 
		cout << "Yes";
	} else {
		cout << "No";
	}
	
	return 0;
}
