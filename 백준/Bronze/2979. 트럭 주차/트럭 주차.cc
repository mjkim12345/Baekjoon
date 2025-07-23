#include <bits/stdc++.h>
using namespace std;


int A,B,C;
int fee[101];
int sum;
int main() {
    cin >> A >> B >> C;

    for (int i=0; i<3; i++) {
        int a,b;
        cin >> a >> b;
        for (int j=a; j<b; j++) {
            fee[j]++;
        }
    }

    for (int i=1; i<=100; i++) {
        if (fee[i]==1) {
            sum += A;
        }else if (fee[i]==2) {
            sum += B*2;
        }else if (fee[i]==3) {
            sum += C*3;
        }
    }

    cout << sum;

    return 0;
}
