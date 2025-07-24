#include <bits/stdc++.h>
using namespace std;

int N;
int cnt[134];
vector<char> result;
int main() {
    cin >> N;

    for (int i=0; i<N; i++) {
        string s;
        cin >> s;
        cnt[s[0]]++;
    }


    for (int i=97; i<=133; i++) {
        if (cnt[i]>=5) {
            result.push_back((char)i);
        }
    }

    if (result.size()==0) {
        cout << "PREDAJA";
    }else {
        int a=result.size();
        for (int i=0; i<a; i++) {
            cout << result[i];
        }
    }
    return 0;
}