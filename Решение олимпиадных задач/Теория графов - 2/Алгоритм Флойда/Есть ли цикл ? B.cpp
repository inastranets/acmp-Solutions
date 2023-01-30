#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<vector<int>> adj(n, vector<int>(n));

	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			cin >> adj[i][j];
			if(adj[i][j] == 0 && i != j)
				adj[i][j] = INF;
		}
	}

	for(int k = 0; k < n; ++k)
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);


	for(int u = 0; u < n; ++u) {
		for(int v = 0; v < n; ++v) {
			if(u != v && adj[u][v] != INF && adj[v][u] != INF) {
				return cout << "Yes", 0;
			}
		}
	}

	cout << "No";

	return 0;
}
