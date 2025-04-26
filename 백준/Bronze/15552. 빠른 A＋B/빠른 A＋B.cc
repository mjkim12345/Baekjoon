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

    int T;
    cin >> T;

    for (int i=0; i<T; i++) {
        int a,b;
        cin >> a >> b;
        cout << a+b << "\n";
    }

    return 0;

}
