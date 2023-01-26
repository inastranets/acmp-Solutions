#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<vector<int>>adj(n + 1, vector<int>(n + 1));
	int u, v;
	for(u = 1; u <= n; ++u) {
		for(v = 1; v <= n; ++ v) {
			bool x;
			cin >> x;
			adj[u][v] = x;
		}
	}

	vector<int> source, flow;
	for(u = 1; u <= n; ++u) {
		int cntFlow = 0;
		int cntSource = 0;
		for(v = 1; v <= n; ++v) {
		        cntFlow+=adj[u][v];
		        cntSource+=adj[v][u];
		}
		if(!cntFlow) {
			flow.push_back(u);
		}

		if(!cntSource) {
			source.push_back(u);
		}
	}

        cout << source.size() << ' ';
        for(auto e:source) 
        	cout << e << ' ';


        cout << '\n' << flow.size() << ' ';
	for(auto e:flow)
		cout << e << ' ';

	return 0;
}
