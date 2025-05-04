#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T,N,M;

    cin >> T;

    while (T--) {
        cin >> N >> M;
        queue<pair<int,int>> q;
        priority_queue<int> pq;

        for (int i=0; i<N; i++) {
            int k;
            cin >> k;
            q.push({k,i});
            pq.push(k);
        }

        int count = 1;
        while (1) {
            int qf = q.front().first;
            int qf2 = q.front().second;
            if (qf!=pq.top()) {
                q.pop();
                q.push({qf,qf2});
            }
            else {
                if (M == qf2) {
                    break;
                }
                q.pop();
                pq.pop();
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;

}
