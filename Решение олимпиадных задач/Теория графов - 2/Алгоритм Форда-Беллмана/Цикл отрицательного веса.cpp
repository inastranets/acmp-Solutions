#include <bits/stdc++.h>
  
using namespace std;
  
struct edge {
    int a, b, cost;
};
  
int n;
vector<edge> e;
const int INF  = (unsigned int) 1e9;
  
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    cin >> n;
    for(int u = 1; u <= n; ++u) {
        for(int v = 1; v <= n; ++v) {
            int w;
            cin >> w;
            if(w < 100'000)
                e.push_back({u,v,w});
        }
    }
  
    vector<int>d(n + 1);
    int x;
    for(int i = 1; i <= n; ++i) {
        x = -1;
        for(int j = 0; j < (int)e.size(); ++j) {
            if(d[e[j].b] > d[e[j].a] + e[j].cost) {
                d[e[j].b] = max(-INF, d[e[j].a] + e[j].cost);
                x = e[j].b;
            }
        }
    }
  
    cout << (x != -1 "YES" : "NO");
  
    return 0;
}
