#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	int lights[101];
	memset(lights,0x0,sizeof(lights));
	for(int i = 0; i<2*m; ++i) {
		int x;
		cin >> x;
		++ lights[x];
	}
	for(int i = 1; i <= n; ++ i)
		cout << lights[i] << ' ';
	return 0;
}
