#include <bits/stdc++.h>

using namespace std;

const long long INF = 1e18;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, s, t;
	cin >> n >> s >> t;
	vector<vector<long long>>adj(n + 1, vector<long long>(n+1));
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= n; ++j) {
			cin >> adj[i][j];
			if(adj[i][j] == -1 && i!=j)
				adj[i][j] = INF;
		}
	}

	for(int k = 1; k <= n; ++k)
		for(int i = 1; i <= n; ++i)
			for(int j = 1; j <= n; ++j) 
				adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

	if(adj[s][t] == INF)
		adj[s][t] = -1;

	cout << adj[s][t];

	return 0;
}
