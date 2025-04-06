#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int sum=0,min=100;

    for (int i=0; i<7; i++) {
        int a;
        cin >> a;
        if (a%2==1) {
            sum +=a;
            if (a<min) min = a;
        }
    }

    if (sum == 0) {
        cout << -1;
    }else {
        cout << sum << "\n" << min;
    }

    return 0;
}