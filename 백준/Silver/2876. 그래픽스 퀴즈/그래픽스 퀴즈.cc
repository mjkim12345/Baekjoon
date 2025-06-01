#include <algorithm>
#include <iostream>
#include <utility>
#include <cmath>
#include <vector>

using namespace std;
int dp[100001][6];
int a,b,N;
int maxRes,minGrade;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;
    for (int i=1; i<=N; i++) {
        cin >> a >> b;
        dp[i][a] = dp[i-1][a] + 1;
        if (dp[i][a]> maxRes) {
            maxRes = dp[i][a];
            minGrade = a;
        }else if (dp[i][a]== maxRes) {
            if (minGrade > a) minGrade = a;
            maxRes = dp[i][a];
        }

        if (a!=b) {
            dp[i][b] = dp[i-1][b]+1;
            if (dp[i][b]>maxRes) {
                maxRes = dp[i][b];
                minGrade = b;
            }else if (dp[i][b]== maxRes) {
                if (minGrade > b) minGrade = b;
                maxRes = dp[i][b];
            }
        }
    }

    cout << maxRes << " " << minGrade;
    return 0;
}
