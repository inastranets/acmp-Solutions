#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));
	bool tournamentG = true;
	for(int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		if(u == v) {
			tournamentG = false;	
		}
		++ adj[u][v];
	}

	for(int v = 1; v <= n; ++v) {
		for(int u = v + 1; u <= n; ++u) {
			if(adj[u][v] + adj[v][u] != 1) 
				tournamentG = false;
		}                    
	}

	if(tournamentG) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}
