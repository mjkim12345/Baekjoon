#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N,sum=0;
    long long result=0;
    cin >> N;
    int num[100001]={0,};

    for (int i = 0; i < N; i++) {
        cin >> num[i];
        sum+=num[i];
    }

    for (int i = 0; i < N; i++) {
        sum -= num[i];
        result += num[i] * sum;
    }

    cout << result;
    return 0;
}