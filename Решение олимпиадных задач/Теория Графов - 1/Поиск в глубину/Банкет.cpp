#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > adj;
vector<int> cl;
void dfs(int s, int c) {
	cl[s] = c;
	for(auto u:adj[s])
	{
		if(cl[u] == 0)
			dfs(u, 3 - c);
		else if(cl[u] == c) {
			cout << "NO";
			exit(0);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	cl.assign(n + 1, 0);
	adj.resize(n + 1);
	for(int i = 0; i < m; ++ i) {
		int u, v;

		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);

	}

	for(int i = 1; i<= n; ++ i)
		if(!cl[i])
			dfs(i, 1);
	cout << "YES";
	return 0;
}
