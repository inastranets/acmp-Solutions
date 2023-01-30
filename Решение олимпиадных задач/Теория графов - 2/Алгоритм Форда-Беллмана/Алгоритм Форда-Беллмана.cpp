#include <bits/stdc++.h>
 
using namespace std;
 
const long long INF = 1LL<<62;
vector<tuple<int,int,int>> edges;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int a,b,w;
        cin >> a >> b >> w;
        edges.push_back({a,b,w});
    }
 
 
    long long distanse[n + 1];
    for(int i = 0; i <= n; ++i)
        distanse[i] = INF;
 
    distanse[1] = 0;
    for(int i = 1; i <= n; ++i) {
        for(auto [a,b,w]:edges) {
            if(distanse[a] != INF)
                distanse[b] = min(distanse[b], distanse[a] + w);    
        }
    }
 
    for(int i = 1; i <= n; ++i) {
        if(distanse[i] == INF)
            distanse[i] = 30'000;
        cout << distanse[i] << ' ';
    }
    return 0;
}
