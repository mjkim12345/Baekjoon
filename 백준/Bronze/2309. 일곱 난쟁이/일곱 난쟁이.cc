#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int main() {
    for (int i=0; i<9; i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }

    sort(a.begin(),a.end());

    do {
        int sum=0;
        for (int i=0; i<7; i++) {
            sum+=a[i];
        }
        if (sum==100) break;
    }while (next_permutation(a.begin(),a.end()));

    for (int i=0; i<7; i++) {
        cout << a[i] << "\n";
    }
    return 0;
}
