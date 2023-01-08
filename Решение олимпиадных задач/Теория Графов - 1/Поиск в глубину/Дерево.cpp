#include <bits/stdc++.h>

using namespace std;

vector<vector<int> >adj;
bool visited[100];
int cnt = 0;
void dfs(int s) {
	if(visited[s])
		return;
	visited[s] = true;
	++ cnt;	
	for(auto u:adj[s])
		dfs(u);
}

int main() {
	ios_base::sync_with_stdio(0);	
	cin.tie(0);

	int n, ways = 0;

	cin >> n;

	adj.resize(n);

	for(int u = 0; u < n; ++u) {
		for(int v = 0; v < n; ++ v) {
			bool x;
			cin >> x;
			if(x) {
				adj[u].push_back(v);
				ways += x;	
			}
		}
	}

	dfs(0);

	cout << (cnt - 1 == (n - 1) && (n - 1) << 1 == ways ? "YES" : "NO");

	return 0;
}
