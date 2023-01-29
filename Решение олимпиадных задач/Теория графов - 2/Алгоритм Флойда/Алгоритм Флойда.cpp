#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<vector<int>> adj(n + 1, vector<int>(n+1));
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
			cin >> adj[i][j];

	for(int k = 0; k < n; ++k) 
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j)
			cout << adj[i][j] << ' ';
		cout << '\n';	
	}

	return 0;
}
