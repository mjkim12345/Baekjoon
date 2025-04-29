#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <cctype>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N,K;
    cin >> N >> K;
    queue<int> q;

    for (int i=1; i<=N;i++) {
        q.push(i);
    }

    cout << "<";
    while (!q.empty()) {
        for (int i=1; i<K; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if (q.size()!=1) {
            cout << ", ";
        }
        q.pop();
    }
    cout << ">";

    return 0;

}
