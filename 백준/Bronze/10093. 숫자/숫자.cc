#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    long long a,b;
    cin >> a >> b;

    if (a>b) swap(a,b);

    if (a==b || b-a == 1) cout << 0;
    else {
        cout << b-a-1 << "\n";
        for (long long i=a+1; i<b; i++) {
            cout << i << " ";
        }
    }
    return 0;
}