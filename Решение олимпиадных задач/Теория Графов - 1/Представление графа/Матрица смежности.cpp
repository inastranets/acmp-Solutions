#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<pair<int,int>> adj;
	for(int u = 1; u <= n; ++u) {
		for(int v = 1; v <= n; ++v) {
			bool x;
			cin >> x;
			if(x)
    				adj.push_back({u,v});
		}
	}

	cout << n << ' ' << adj.size() << '\n';
	for(auto u:adj)
		cout << u.first << ' ' << u.second << '\n';
  
	return 0;
}
