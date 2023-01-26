#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<vector<int>>adj(n + 1, vector<int>(n + 1, 0));
	for(int v = 1; v <= n; ++v) {
		int m;
		cin >> m;
		for(int u = 0; u < m; ++u) {
			int x;
			cin >> x;
			adj[v][x] = 1;
		}
	}

  cout << n << '\n';
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= n; ++j) {
			cout << adj[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}
