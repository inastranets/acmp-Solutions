#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; 

	cin >> n;

	bool a[n][n];

	for(int i = 0; i < n; ++ i)
		for(int j = 0; j < n; ++ j)
			cin >> a[i][j];

	int cl[n];
	for(int i = 0; i < n; ++ i)
		cin >> cl[i];

	int res = 0;
	for(int i = 0; i < n; ++i)
		for(int j = i + 1; j < n; ++ j)
			if(a[i][j] && cl[i] != cl[j])
				++ res;
	cout << res;

	return 0;
}
