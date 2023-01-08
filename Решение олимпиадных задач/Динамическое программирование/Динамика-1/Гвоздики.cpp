#include <bits/stdc++.h>

using namespace std;

int main() {     	
	int n;
	cin >> n;
	vector<int> a(n), dp(n);
	for(auto &x:a)
		cin >> x;
	sort(a.begin(),a.end());
	dp[0]=dp[1]=a[1]-a[0];
	for(int i = 2; i < n; ++ i)
		dp[i] = a[i] - a[i-1] + min(dp[i-1],dp[i-2]);
	cout << dp[n-1];
	return 0;
}
