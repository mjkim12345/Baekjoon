#include <bits/stdc++.h>

using namespace std;

int n,m,flag;
int main() {
    cin >> n >> m;
    int cnt[n];

    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        cnt[i] = a;
    }

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (cnt[j]) {
                if (cnt[i]+cnt[j]==m) {
                    flag++;
                    cnt[j]==0;
                }
            }
        }
    }

    cout << flag;
}