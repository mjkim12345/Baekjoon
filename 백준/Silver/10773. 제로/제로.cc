#include <iostream>
#include <stack>

using namespace std;

long long N, sum;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> dat;
    cin>>N;

    for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        if (a==0) {
            dat.pop();
        }else {
            dat.push(a);
        }
    }

    int s = dat.size();

    for (int i=0; i<s; i++) {
        sum += dat.top();
        dat.pop();
    }
    cout << sum;

    return 0;
}
