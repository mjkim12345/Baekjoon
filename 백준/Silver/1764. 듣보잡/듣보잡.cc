#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <map>
#include <stack>
#include <string.h>
#include <utility>


using namespace std;

int N,M;
vector<string> v;
vector<string> sv;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count=0;
    cin >> N >> M;

    for (int i=0; i<N; i++) {
        string s;
        cin >> s;
        sv.push_back(s);
    }

    sort(sv.begin(), sv.end());

    for (int i=0; i<M; i++) {
        string t;
        cin >> t;
        if (binary_search(sv.begin(), sv.end(), t)) {
            v.push_back(t);
        }
    }

    count = v.size();
    sort(v.begin(), v.end());

    cout << count<< "\n";
    for (int i=0; i<count; i++) {
        cout << v[i] << "\n";
    }

    return 0;
}
