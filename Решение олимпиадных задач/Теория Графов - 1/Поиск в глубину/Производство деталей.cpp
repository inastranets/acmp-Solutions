#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> adj;
vector<int> topological_order;
vector<bool> visited;

void dfs(int s) {
    if(visited[s])
        return;
    visited[s] = true;
    for(auto u:adj[s])
        dfs(u);
    topological_order.push_back(s);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    visited.assign(n + 1, 0);
    adj.resize(n + 1);
    int time[n + 1];

    for(int i = 1; i <= n; ++i)
        cin >> time[i];

    for(int u = 1; u <= n; ++ u) {
            int k;
            cin >> k;
            for(int i = 0; i < k; ++i) {
                int v;
                cin >> v;
                adj[u].push_back(v);
            }
    }

    dfs(1);

    long long ans = 0;
    for(auto u:topological_order)
        ans += time[u];

    cout << ans << ' ' << topological_order.size() << '\n';

    for(auto u:topological_order)
        cout << u << ' ';
    return 0;
}
