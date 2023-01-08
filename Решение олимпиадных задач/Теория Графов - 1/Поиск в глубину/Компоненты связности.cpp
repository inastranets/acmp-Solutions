#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > adj;
vector<bool> visited;
vector<int> comp;

void dfs(int s) {
	if(visited[s])
		return;

	visited[s] = true;

	comp.push_back(s);

	for(auto u:adj[s])
		dfs(u);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;

	cin >> n >> m;

	adj.resize(n + 1);
	visited.assign(n + 1, 0);

	for(int i = 0; i < m; ++ i) {
		int u, v;

		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<vector<int> > ans;
	for(int i = 1; i <= n; ++ i) {
		comp.clear();
		if(!visited[i]) {
			dfs(i);
			ans.push_back(comp);
		}
	}

	cout << ans.size() << '\n';
	for(int i = 0; i < ans.size(); ++ i) {
		cout << ans[i].size() << '\n';
		for(auto u:ans[i])
			cout << u << ' ';
		cout << '\n';
	}
	return 0;
}
