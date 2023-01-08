#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, l, r;

	cin >> n >> l >> r;

	while(r!=l) {
		if(l > r)
			l >>= 1;
		else 
			r >>= 1;
	}

	cout << l;

	return 0;
}
