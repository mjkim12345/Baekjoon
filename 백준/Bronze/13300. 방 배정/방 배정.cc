#include <algorithm>
#include <iostream>
#include <utility>
#include <cmath>
#include <vector>


int b[7]={};
int g[7]={};
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N,K,count=0;
    cin >> N >> K;
    for (int i=0; i<N; i++) {
        int S,grade;
        cin >> S >> grade;
        if (S == 0) {
            g[grade] +=1;
        }
        else {
            b[grade] +=1;
        }
    }

    for (int i=1; i<7; i++) {
        if (g[i]%K>0) {
            count += g[i]/K + 1;
        }else {
            count += g[i]/K;
        }

        if (b[i]%K>0) {
            count += b[i]/K + 1;
        }else {
            count += b[i]/K;
        }
    }

    cout << count;

    return 0;
}
