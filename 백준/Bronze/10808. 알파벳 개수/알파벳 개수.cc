#include <bits/stdc++.h>
using namespace std;
string s;
int arr[26];
int main() {
    cin >> s;

    for (int i=0; i<s.size(); i++) {
        arr[s[i]-97]++;
    }

    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}