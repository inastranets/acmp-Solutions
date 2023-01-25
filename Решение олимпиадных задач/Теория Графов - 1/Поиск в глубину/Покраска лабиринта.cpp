#include <bits/stdc++.h>

using namespace std;

const int mxN = 50;
char labyrinth[2 * mxN - 1][2 * mxN - 1];
int cnt = 0;

void dfs(int i, int j) {
    if(labyrinth[i][j] == '#') {
        ++ cnt;
        return;
    }

    if(!labyrinth[i][j])
        return;

    labyrinth[i][j] = 0;

    dfs(i + 1, j);
    dfs(i - 1, j);
    dfs(i, j + 1);
    dfs(i, j - 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <=n; ++i) {
        labyrinth[0][i] = labyrinth[n+1][i] = labyrinth[i][0] = labyrinth[i][n+1] = '#';
        for(int j = 1; j <= n; ++j) {
            cin >> labyrinth[i][j];
        }
    }

    dfs(1,1);
    dfs(n,n);

    cout << (cnt - 4) * 25;

    return 0;
}
