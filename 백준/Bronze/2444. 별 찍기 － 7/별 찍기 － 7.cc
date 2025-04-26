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

    for (int i=0; i<N-1; i++) {
        for (int j=0; j<N-1-i; j++) {
            cout << " ";
        }
        for (int k=0; k<i*2+1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i=N; i>0; i--) {
        for (int j=0; j<N-i; j++) {
            cout << " ";
        }
        for (int k=0; k<2*i-1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;

}
