#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));
	int sum = 0;
	for(int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u][v] = adj[v][u] = 1;
	}


	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j<= n; ++j) {
			sum += adj[i][j];
		}
	}

	cout << (sum == n * (n - 1) ? "YES" : "NO") << '\n';
	
	return 0;
}
