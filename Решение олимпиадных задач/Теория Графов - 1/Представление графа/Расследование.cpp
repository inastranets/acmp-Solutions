#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> p(n + 1);
	int u, v;
	cin >> u >> v;
	for(int i = 2; i <= n; ++i) {
		cin >> p[i];
	}

	while(u != v) {
		if(u > v)
			u = p[u];
		else
			v = p[v];
	}

	cout << v;

	return 0;
}
