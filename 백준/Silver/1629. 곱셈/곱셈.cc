#include <bits/stdc++.h>
using namespace std;


long long a,b,c,tmp;

long long go(long long a,long long b) {
    if (b==1) return a%c;

    tmp = go(a,b/2);
    tmp = (tmp*tmp)%c;
    if (b%2) tmp = (tmp*a)%c;
    return tmp;
}



int main() {
    cin >> a >> b >> c;
    cout << go(a,b);
    return 0;
}
