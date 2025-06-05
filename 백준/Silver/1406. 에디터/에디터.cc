#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <list>
#include <map>
#include <stack>
#include <string.h>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    list<char> s;
    int N;

    cin >> word;

    for (int i=0; i<word.size(); i++) {
        s.push_back(word[i]);
    }
    auto cursor = s.end();

    cin >> N;

    for (int i=0; i<N; i++) {
        char c;
        cin >> c;
        if (c == 'P') {
            char c2;
            cin >> c2;
            s.insert(cursor, c2);
        }else if (c == 'L') {
            if (cursor != s.begin()) {
                cursor--;
            }
        }else if (c == 'D') {
            if (cursor != s.end()) {
                cursor++;
            }
        }else if (c == 'B') {
            if (cursor != s.begin()) {
                cursor--;
                cursor = s.erase(cursor);
            }
        }
    }

    for (char c : s) {
        cout << c;
    }

    return 0;
}
