#include <bits/stdc++.h>
using namespace std;

string s;
vector<char> word;
int main() {
    cin >> s;

    for (int i=s.size()-1; i>=0; i--) {
        word.push_back(s[i]);
    }

    for (int i=0; i<s.size(); i++) {
        if (s[i]!=word[i]) {
            cout << 0;
            return 0;
        }
    }

    cout << 1;

    return 0;
}