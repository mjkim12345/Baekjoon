#include <iostream>
#include <queue>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int num=0, num2=1;

    while (true) {
        string numString = to_string(num2);

        for (char c : numString) {
            if (c == s[num]) {
                num++;
                if (num == s.length()) {
                    cout << num2;
                    return 0;
                }
            }
        }
        
        num2++;
    }
}
