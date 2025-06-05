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


int N;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i=0; i<N; i++) {
        list<char> l;
        string pw_in;
        cin >> pw_in;

        auto t = l.end();

        for (char c : pw_in) {
            if (c == '-') {
                if (t != l.begin()) {
                    t--;
                    t = l.erase(t);
                }
            }else if (c == '<') {
                if (t != l.begin()) {
                    t--;
                }
            }else if (c =='>') {
                if (t != l.end()) {
                    t++;
                }
            }else {
                l.insert(t,c);
            }
        }
        for (auto c1 : l) {
            cout << c1;
        }
        cout << "\n";
    }

    return 0;
}
