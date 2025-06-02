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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<string> q;
    map<string,string> m;

    cin >> N >> M;
    for (int i=0; i<N; i++) {
        string key, value;
        cin >> key >> value;
        m.insert({key, value});
    }

    for (int i=0; i<M; i++) {
        string find_value;
        cin >> find_value;
        string find_key = m.at(find_value);
        q.push(find_key);
    }

    int s = q.size();

    for (int i=0; i<s; i++) {
        cout << q.front() << "\n";
        q.pop();
    }
    return 0;
}
