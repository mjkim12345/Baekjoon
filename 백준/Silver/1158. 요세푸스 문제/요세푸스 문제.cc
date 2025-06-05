#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <list>
#include <map>
#include <stack>
#include <string.h>
#include <utility>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,K;
    queue<int> q;
    queue<int> res;
    cin >> N >> K;

    for (int i=1; i<=N; i++) {
        q.push(i);
    }

    while (q.size()>0) {
        for (int i=1; i<K; i++) {
            int a = q.front();
            q.pop();
            q.push(a);
        }
        res.push(q.front());
        q.pop();
    }

    cout << "<";

    int size = res.size();
    for (int i=0; i<size; i++) {
        if (i== size-1) {
            cout << res.front();
            res.pop();
            break;
        }
        cout << res.front() << ", ";
        res.pop();
    }

    cout << ">";

    return 0;
}
