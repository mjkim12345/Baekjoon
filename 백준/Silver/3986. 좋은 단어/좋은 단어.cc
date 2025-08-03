#include <bits/stdc++.h>
using namespace std;

int n,cnt;
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> s;
        vector<char> w;
        for (char a : s) {
            if (!w.empty() && w.back()==a) {
                w.pop_back();
            }else {
                w.push_back(a);
            }
        }
        if (w.empty()) cnt++;
    }

    cout << cnt;
    return 0;
}
