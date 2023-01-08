#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, res = INT_MAX;
	cin >> n;
	int cost[n][n];
	for(int i = 0; i < n; ++ i)
		for(int j = 0; j < n; ++j)
			cin >> cost[i][j];
	for(int i = 0; i < n; ++ i)
		for(int j = i + 1; j < n; ++ j)
			for(int c = j + 1; c < n; ++ c)
				res = min(res,cost[i][j] + cost[j][c] + cost[c][i]);
	cout << res;
	return 0;
}
