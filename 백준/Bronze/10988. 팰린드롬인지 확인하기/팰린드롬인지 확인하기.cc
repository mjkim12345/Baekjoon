#include <bits/stdc++.h>
using namespace std;

string s,tmp;
int main() {
    cin >> s;
    tmp = s;
    reverse(tmp.begin(), tmp.end());

    if (s!=tmp) cout <<0;
    else cout << 1;
    
    return 0;
}