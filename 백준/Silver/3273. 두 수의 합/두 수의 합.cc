#include <algorithm>
#include <iostream>
#include <utility>
#include <cmath>
#include <vector>
#include <bits/ranges_algo.h>


int v[1000001]={};
bool v1[2000001]={};
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N,K,count=0;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }
    cin >> K;


    for (int i=0; i<N; i++) {
        if (K-v[i]>0 && v1[K-v[i]]) {
            count++;
        }
        v1[v[i]] = true;
    }

    cout << count;
    return 0;
}
