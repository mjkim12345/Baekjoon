#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <map>
#include <stack>
#include <string.h>
#include <utility>


using namespace std;

stack<int> number;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if (c>='0' && c<='9') {
            number.push(c-'0');
        }else {
            int a,b;
            a = number.top();
            number.pop();
            b = number.top();
            number.pop();

            if (c == '+') {
                number.push(b+a);
            }else if (c == '-') {
                number.push(b-a);
            }else if (c== '*') {
                number.push(b*a);
            }else if (c == '/') {
                number.push(b/a);
            }
        }
    }

    cout << number.top();


    return 0;
}
