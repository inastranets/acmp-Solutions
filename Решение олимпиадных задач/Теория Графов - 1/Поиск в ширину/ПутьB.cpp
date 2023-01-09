#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > adj;
vector<int> s, b;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, A, B;
	cin >> n;
	adj.resize(n + 1);
	for(int u = 1; u <= n; ++u) {
		for(int v = 1; v <= n; ++v) {
			bool x;
			cin >> x;
			if(x)
				adj[u].push_back(v);
		}
	}

	cin >> A >> B;

	s.resize(n + 1);

	s[A] = 1;
	b.push_back(A);
	for(int i = 0; i < b.size(); ++ i) {
		int to = b[i];
		for(auto u:adj[to])
			if(s[u] == 0){
				s[u] = s[to] + 1;
				b.push_back(u);
			}
		
	}
	cout << s[B] - 1;	
	return 0;
}
