#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        string s;
        getline(cin, s);

        if (s == ".") break;

        stack<char> v;
        bool isValid = true;

        for (char c : s) {
            if (c == '(' || c == '[') {
                v.push(c);
            } else if (c == ')') {
                if (v.empty() || v.top() != '(') {
                    isValid = false;
                    break;
                }
                v.pop();
            } else if (c == ']') {
                if (v.empty() || v.top() != '[') {
                    isValid = false;
                    break;
                }
                v.pop();
            }
        }

        if (isValid && v.empty()) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}
