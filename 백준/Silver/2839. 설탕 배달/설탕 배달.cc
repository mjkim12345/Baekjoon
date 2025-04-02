#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie (0);
    cout.tie (0);

    int N,min=5000;
    cin >> N;


    for (int i=0; i<=N/5; i++) {
        for (int j=0; j<=N/3; j++) {
            if (i*5 + j*3 == N) {
                if (i+j<min) {
                    min = i+j;
                }
            }
        }
    }

    if (min == 5000) {
        cout << -1;
    }else {
        cout << min;
    }



    return 0;
}