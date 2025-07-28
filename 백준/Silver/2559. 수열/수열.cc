#include <bits/stdc++.h>

using namespace std;

int N,K,a;
int prefix_s[100001];
vector<int> sum;
int main() {
    cin >> N >> K >> a;

    prefix_s[0] = a;

    for (int i=1; i<N; i++) {
        cin >> a;
        prefix_s[i] = a + prefix_s[i-1];
    }

    sum.push_back(prefix_s[K-1]);
    for (int i=K; i<N; i++) {
        sum.push_back(prefix_s[i]-prefix_s[i-K]);
    }

    sort(sum.begin(),sum.end());

    cout << sum.back();
    return 0;
}
