#include <iostream>
#include <stack>

using namespace std;

int N;
string s;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> dat;
    cin>>N;

    for (int i=0; i<N; i++) {
        cin >> s;

        if (s == "push") {
            int m;
            cin >> m;
            dat.push(m);
        }else if (s == "pop") {
            if (dat.empty()) {
                cout << -1<<"\n";
            }else {
                cout << dat.top() << "\n";
                dat.pop();
            }
        }else if (s == "size") {
            cout << dat.size() << "\n";
        }else if (s == "empty") {
            if (dat.empty()) {
                cout << 1 << "\n";
            }else {
                cout << 0 << "\n";
            }
        }else if (s == "top") {
            if (dat.empty()) {
                cout << -1 << "\n";
            }else {
                cout << dat.top() << "\n";
            }
        }
    }
    return 0;
}
