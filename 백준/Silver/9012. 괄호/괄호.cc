#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        string s;
        cin >> s;

        stack<char> v;
        bool isValid = true;

        for (char c : s) {
            if (c == '(') {
                v.push(c);
            } else if (c == ')') {
                if (v.empty() || v.top() != '(') {
                    isValid = false;
                    break;
                }
                v.pop();
            }
        }

        if (isValid && v.empty()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
