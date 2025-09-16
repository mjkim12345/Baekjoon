#include <bits/stdc++.h>
using namespace std;

int N,M,y,x;
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};
int adj[104][104];
int visited[104][104];


int main() {
    cin >> N >> M;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=M; j++) {
            scanf("%1d",&adj[i][j]);
        }
    }

    queue<pair<int,int>> q;
    visited[1][1] = 1;
    q.push({1,1});
    while (q.size()) {
        tie(y,x) = q.front(); q.pop();
        for (int i=0; i<4; i++) {
            int ny = y +dy[i];
            int nx = x +dx[i];
            if (ny<1 || ny>N || nx<1 || nx>M || adj[ny][nx]==0) continue;
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny,nx});
        }
    }
    cout << visited[N][M];
    return 0;
}