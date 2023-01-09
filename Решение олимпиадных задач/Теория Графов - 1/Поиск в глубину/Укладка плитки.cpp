#include <bits/stdc++.h>

using namespace std;

const int n = 8;
char board[n][n + 1];
void dfs(int i, int j, char x) {
	if(i < 0 || i > n || j < 0 || j > n || board[i][j] != x)
		return;
	board[i][j] = 0;
	dfs(i + 1, j, "WB"[x=='W']);
	dfs(i - 1, j, "WB"[x=='W']);
	dfs(i, j + 1, "WB"[x=='W']);
	dfs(i, j - 1, "WB"[x=='W']);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	for(int i = 0; i < n; ++i)
		cin >> board[i];
	int ans = 0;
	for(int i = 0; i < n; ++ i)
		for(int j = 0; j < n; ++ j)
			if(board[i][j]) 
				dfs(i, j, board[i][j]), ++ ans;
	cout << ans;
	return 0;
}
