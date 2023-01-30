#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<char> cl;
bool dfs(int s) {
	cl[s] = 1;
	for(auto u:adj[s])
	{
		if(cl[u] == 0) {
			if(dfs(u))
				return true;
		} else if(cl[u] == 1) {
			return true;
		}
	}

	cl[s] = 2;
	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	adj.resize(n + 1);
	cl.assign(n + 1, 0);
	for(int u = 1; u <= n; ++u) {
		for(int v = 1; v <= n; ++v) {
			bool x;
			cin >> x;
			if(x)
				adj[u].push_back(v);
		}
	}

	for(int v = 1; v <= n; ++v)
	{
		if(cl[v] == 0) {
			if(dfs(v))
			{
				return cout << "Yes", 0;

			}
		}
	}

	cout << "No";
	
	return 0;
}
