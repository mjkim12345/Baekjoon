#include <iostream>
#include <utility>
#include <cmath>
#include <vector>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;

    int result = a*b*c;
    int n[10] = {0,};

    while (result>=1) {
        int k = result % 10;
        n[k]++;
        result /= 10;
    }

    for (int i : n) {
        cout << i << "\n";
    }



    return 0;
}
