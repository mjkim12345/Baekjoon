#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c,result=0,m;
    cin >> a >> b >> c;

    if (a==b && b==c) {
        result = 10000 + a*1000;
    }else if (a==b || a==c) {
        result = 1000 + a*100;
    }else if (b==c) {
        result = 1000 + b*100;
    }
    else {
        m = max({a,b,c});
        result = m * 100;
    }

    cout << result;

    return 0;
}