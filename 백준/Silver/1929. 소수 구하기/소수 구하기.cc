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

    int M,N;
    cin >> M >> N;

    int max;
    for (int i=M; i<=N; i++) {
        max = sqrt(i);
        if (max == 1 && i !=1) cout << i << "\n";
        else {
            for (int j=2; j<=max; j++) {
                if (i%j==0) break;
                if (j==max) cout << i <<"\n";
            }
        }
    }

    return 0;

}
