#include <bits/stdc++.h>

using namespace std;

int main() {     	
	int n;
	cin >> n;
	int dp[n + 1];
	memset(dp,0x0,sizeof(dp));
	dp[1] = 2;
	dp[2] = 4;
	for(int i = 3; i<=n; ++ i)
		dp[i] = dp[i - 1] + i;
	cout << dp[n];
	return 0;
}
