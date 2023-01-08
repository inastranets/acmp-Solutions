#include <bits/stdc++.h>

using namespace std;

int main() {     	
	long long n, k;
	cin >> n >> k;
	if(n == 1)
		return cout << k, 0;
	vector<int> count(n + 1);
	count[1] = k - 1;
	count[2] = (k - 1) * k;
	for(int i = 3; i <= n; ++ i)
		count[i] = (k-1)*(count[i-1]+count[i-2]);
	cout << count[n];
	return 0;
}
