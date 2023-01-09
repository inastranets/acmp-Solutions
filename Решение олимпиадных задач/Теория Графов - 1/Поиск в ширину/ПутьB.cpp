#include <bits/stdc++.h>

using namespace std;

const int N = 100;
vector<vector<int> > adj;
queue<int> q;
int distanse[N + 1];
bool visited[N + 1];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	adj.resize(n + 1);

	for(int u = 1; u <= n; ++ u) {
		for(int v = 1; v <= n; ++ v) {
			bool x;
			cin >> x;
			if(x == 0 && v!=u) {
				distanse[v] = N;
				distanse[u] = N;
			}
				
			if(x) 
				adj[u].push_back(v);
		}
	} 
	
	int A, B;

	cin >> A >> B;

	q.push(A);
	visited[A]=true;
	distanse[A] = 0;

	while(!q.empty()) {
		int s = q.front();
		q.pop();
		for(auto to:adj[s]) {
			if(visited[to])
				continue;
			visited[to] = true;
			distanse[to] = distanse[s] + 1;
			q.push(to);
		}
	}

	if(distanse[B] == N)
		distanse[B] = -1;

	cout << distanse[B];

	return 0;
}
