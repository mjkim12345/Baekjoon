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

    for (int i=0; i<N; i++) {
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        for (int j=2*N-1; j>i*2; j--) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i=1; i<=N-1; i++) {
        for (int j=N-2; j>=i; j--) {
            cout << " ";
        }
        for (int j=1; j<=2*i+1; j++) {
            cout << "*";
        }
        cout << "\n";
    }



    return 0;

}
