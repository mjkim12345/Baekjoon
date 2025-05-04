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
    cin.tie(NULL);
    cout.tie(NULL);

    int K,N,sum=0;
    cin >> K >> N;
    int len_max=0;
    vector<int> v(K);

    for (int i = 0; i < K; i++) {
        cin >> v[i];
        len_max = max(len_max, v[i]);
    }


    long long left=1;
    long long right = len_max;
    long long mid = (left + right)/2;

    while (left <= right) {
        long long int result =0;
        for (int i = 0; i < K; i++) {
            result += v[i]/mid;
        }

        if (result>=N) {
            left = mid +1;
        }
        else {
            right = mid-1;
        }

        mid = (left + right)/2;
    }

    // 완탐이 시간초과라면 이분탐색을 고민해보자

    cout << mid;
    return 0;
}
