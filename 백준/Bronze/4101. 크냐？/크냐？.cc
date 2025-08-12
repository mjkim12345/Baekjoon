#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b;
    while (1) {
        cin >> a >>b;
        if (a==0 && b==0) {
            return 0;
        }

        if (a>b) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
