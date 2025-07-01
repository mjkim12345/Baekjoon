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

int zero[41];
int one[41];
int N,M;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    zero[0] = 1 , zero[1] = 0;
    one[0] = 0 , one[1] = 1;

    for (int i=2; i<=40; i++) {
        zero[i] = zero[i-1]+zero[i-2];
        one[i] = one[i-1] + one[i-2];
    }

    while (N--) {
        cin >> M;
        cout << zero[M] << " " << one[M] << "\n";
    }
    return 0;
}
