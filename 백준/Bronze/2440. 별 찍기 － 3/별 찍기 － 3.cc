#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <cctype>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    for (int i=N; N>0; N--) {
        for (int j=0; j<N; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;

}
