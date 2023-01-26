#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<vector<int>> adj(n + 1);
	for(int u = 1; u <= n; ++u) {
		for(int v = 1; v <= n; ++v) {
			bool x;
			cin >> x;
			if(x)
				adj[u].push_back(v);
		}
	}

	set<int> vertex;
	for(int v = 1; v <= n; ++v) {
		vertex.insert(adj[v].size());
	}

	cout << (vertex.size() == 1 ? "YES" : "NO");

	return 0;
}
