#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<char> cl;

bool dfs(int s) {
    cl[s] = 1;
    for(auto u:adj[s]) {
        if(cl[u] == 0) {
            if(dfs(u))
                return true;
        } else if(cl[u]==1)
            return true;
    }

    cl[s] = 2;

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    adj.resize(n + 1);
    cl.assign(n + 1, 0);

    for(int i = 0; i < m; ++i) {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }


    for(int i = 1; i <= n; ++i) {
        if(cl[i] == 0) {
            if(dfs(i)) {
                cout << "No";
                exit(0);
            }
        }
    }

    cout << "Yes";
  
    return 0;
}
