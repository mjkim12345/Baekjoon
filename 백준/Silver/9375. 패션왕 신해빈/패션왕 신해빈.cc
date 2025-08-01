#include<bits/stdc++.h>

using namespace std;

int N,M;
string a,b;

int main() {
    cin >> N;
    while (N--) {
        cin >> M;
        map<string,int> tmp;
        for (int i=0; i<M; i++) {
            cin >> a >> b;
            tmp[b]++;
        }
        long long ret=1;

        for (auto it : tmp) {
            ret *= ((long long)it.second + 1);
        }
        ret--;
        cout << ret << "\n";
    }
    return 0;
}