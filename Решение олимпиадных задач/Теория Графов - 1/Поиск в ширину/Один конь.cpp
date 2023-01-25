#include <bits/stdc++.h>

using namespace std;

int dx[] = {-1,+1,-2,+2,-2,-1,+2,+1};
int dy[] = {+2,+2,+1,+1,-1,-2,-1,-2};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    queue<pair<int,int> > q;
    int distanse[n + 1][n + 1];

    memset(distanse, 0x0, sizeof distanse);

    q.push({x1,y1});
    distanse[x1][y1] = 1;

    while(!q.empty()) {

        pair<int,int> u = q.front();
        q.pop();

        for(int i = 0; i < 8; ++ i) {

            pair<int,int> v = {u.first + dx[i], u.second + dy[i]};

            if(v.first < 1 || v.first > n || v.second < 1 || v.second > n)
                continue;
            if(distanse[v.first][v.second] > 1)
                continue;

            distanse[v.first][v.second] = distanse[u.first][u.second] + 1;
            q.push(v);
        }
    }

    cout << distanse[x2][y2] - 1;

    return 0;
}
