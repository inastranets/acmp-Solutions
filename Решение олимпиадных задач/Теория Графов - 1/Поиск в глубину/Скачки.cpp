#include <bits/stdc++.h>

using namespace std;

const int mxN = 100;
vector<int> adj[mxN + 1];
bool visited[mxN + 1];
int cnt = 0;

void dfs(int s) {
    if(visited[s])
        return;
    visited[s] = true;
    ++ cnt;
    for(auto u:adj[s])
        dfs(u);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int n, k;
  
    cin >> n >> k;
  
    while(true) {
        int u;
        cin >> u;
        if(u!=0) {
            int v;
            cin >> v;
            adj[u].push_back(v);
        } else {
            break;
        }
    }
  
    dfs(k);
  
    cout << (cnt < n ? "No" : "Yes");
  
    return 0;
}
