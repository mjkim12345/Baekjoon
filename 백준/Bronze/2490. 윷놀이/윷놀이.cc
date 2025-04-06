#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a;

    for (int i=0; i<3; i++) {
        int count =0;
        for (int j=0; j<=3; j++) {
            cin >> a;
            if (a == 0) count++;
        }

        if (count == 1) cout << "A\n";
        else if (count == 2) cout << "B\n";
        else if (count == 3) cout << "C\n";
        else if (count == 4) cout << "D\n";
        else cout << "E\n";
    }

    return 0;
}