#include <iostream>
#include <vector>

using namespace std;


vector<int> graph[101];
int count;
bool visited[101];

void dfs(int x) {
    count++;
    visited[x] = true;
    for (int i : graph[x]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b;
    cin >> a >> b;
    for (int i=1; i<=b; i++) {
        int c,d;
        cin >> c >> d;
        graph[c].push_back(d);
        graph[d].push_back(c);
    }
    dfs(1);
    cout << count-1;
    return 0;
}
