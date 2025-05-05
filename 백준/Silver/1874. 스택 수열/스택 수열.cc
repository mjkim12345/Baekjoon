#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,count=1;
    cin >> n;
    stack<int> s;
    vector<char> result;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        while (count<=number) {
            s.push(count);
            count++;
            result.push_back('+');
        }

        if (number == s.top()) {
            s.pop();
            result.push_back('-');
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    for (char c : result) {
        cout << c << "\n";
    }
    return 0;
}
