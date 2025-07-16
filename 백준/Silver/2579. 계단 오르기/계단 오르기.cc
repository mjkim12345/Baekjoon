#include <iostream>
#include <vector>

using namespace std;

#define MAX 301
int dp[MAX];
int Arr[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for (int i=1;i<=N; i++) {
        cin >> Arr[i];
    }

    dp[1] = Arr[1];
    dp[2] = Arr[2]+Arr[1];
    dp[3] = max(Arr[1]+Arr[3] , Arr[2]+Arr[3]);

    for (int i=4; i<=N; i++) {
        dp[i] = max(dp[i-2]+Arr[i], dp[i-3]+Arr[i-1]+Arr[i]);
    }
    cout << dp[N];



    return 0;
}
