#include <bits/stdc++.h>

using namespace std;

const int inf = 100;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	vector<vector<int>>adj(n,vector<int>(n));

	for(int i = 0; i < n; ++ i) {
		for(int j = 0; j < n; ++j) {
			cin >> adj[i][j];
			if(adj[i][j] == 0 && i != j)
				adj[i][j] = inf;
		}
	}

	for(int k = 0; k < n; ++k)
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++ j)
				adj[i][j] = min(adj[i][j], adj[k][i] + adj[j][k]);

	int u, v;

	cin >> u >> v;

	-- u;
	-- v;

	if(adj[u][v] == inf)
		adj[u][v] = -1;

	cout << adj[u][v];

	return 0;
}
