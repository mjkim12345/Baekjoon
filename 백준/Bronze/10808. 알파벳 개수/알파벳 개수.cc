#include <iostream>
#include <utility>
#include <cmath>
#include <vector>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    int N[26] = {0,};

    for (auto c : s) {
            N[c-'a']++;
        }

    for (int i : N) {
        cout << i << " ";
    }

    return 0;
}
