#include <bits/stdc++.h>

using namespace std;

int n,k,temp, pre_sum[100001], ret = -10000004;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;
    for (int i=1; i<=n; i++) {
        cin >> temp;
        pre_sum[i] = pre_sum[i-1]+temp;
    }

    for (int i=k; i<=n; i++) {
        ret = max(ret,pre_sum[i]-pre_sum[i-k]);
    }
    cout << ret;
    return 0;
}
