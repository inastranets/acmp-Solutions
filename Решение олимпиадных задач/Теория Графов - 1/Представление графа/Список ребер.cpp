#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<vector<int>> adj(n + 1);
	for(int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
	}

	cout << n << '\n';
	for(int i = 1; i <= n; ++i) {
		cout << adj[i].size() << ' ';
    sort(adj[i].begin(), adj[i].end());
		for(auto u:adj[i])
			cout << u << ' ';
		cout << '\n';
	}
	return 0;
}
