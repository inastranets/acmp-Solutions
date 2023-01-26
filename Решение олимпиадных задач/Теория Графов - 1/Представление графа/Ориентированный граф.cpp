#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));
	int sum = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
   			bool x;
   			cin >> x;
   			if(x) {
   				if(i == j) {
   					cout << "NO";
   					exit(0);
   	 			}
   	 			adj[i][j] = 1;
   	 			sum += x;
   			}	
		}
	}

	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			if(adj[i][j] && adj[i][j] == adj[j][i]) {
			 	++ cnt;
			}
		}
	}
	
	cout << ( cnt == sum ? "NO" : "YES") << '\n';

	return 0;
}
