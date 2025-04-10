#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while (q.size()!=1) {
        q.pop();
        if (q.size() == 1) {
            break;
        }
        int b = q.front();
        q.pop();
        q.push(b);
    }

    cout << q.front();
    return 0;
}