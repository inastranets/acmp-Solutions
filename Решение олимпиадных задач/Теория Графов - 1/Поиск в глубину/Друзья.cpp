#include <bits/stdc++.h>

using namespace std;

const int mxN = 100;
vector<vector<int> > adj(mxN, vector<int>(mxN));
bool visited[mxN];
int ans = 0;

void dfs(int s) {
    if(visited[s])
      return;
    visited[s] = true;
    ++ ans;
    for(int i = 0; i < adj.size(); ++ i)
        if(adj[s][i])
           dfs(i);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, s;
    
    cin >> n >> s;
    
    for(int i = 0; i < n; ++ i)
        for(int j = 0; j < n; ++ j)
            cin >> adj[i][j];
    
    dfs(s - 1);
    
    cout << ans - 1;
    
    return 0;
}
