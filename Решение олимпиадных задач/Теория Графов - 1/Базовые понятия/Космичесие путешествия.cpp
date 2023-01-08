#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	int counter[n + 1];

	memset(counter, 0x0, sizeof(counter));

	for(int i = 1; i < n; ++ i) {
		int u, v;
		cin >> u >> v;
		++ counter[u];	
		++ counter[v];
	}

	int ans = 0;
	for(int i = 1; i <= n; ++ i)
		ans += counter[i] > 1;

	cout << ans;

	return 0;
}
