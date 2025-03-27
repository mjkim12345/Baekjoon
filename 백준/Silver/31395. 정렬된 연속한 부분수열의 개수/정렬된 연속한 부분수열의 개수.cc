#include <iostream>
using namespace std;

int A[200001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long ans = 0;
    int start = 0;

    for (int i = 0; i < N; i++) {
        if (i > 0 && A[i - 1] >= A[i]) {
            start = i; 
        }
        ans += (i - start + 1);
    }

    cout << ans << "\n";
}
