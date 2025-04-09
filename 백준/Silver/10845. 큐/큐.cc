#include <iostream>
#include <queue>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N,number;
    cin >> N;
    string command;
    queue<int> s;

    for (int i = 0; i < N; i++) {
        cin >> command;

        if (command == "push") {
            cin >> number;
            s.push(number);
        }else if (command == "pop") {
            if (s.empty()) {
                cout << -1 << "\n";
            }else {
                cout << s.front() << "\n";
                s.pop();
            }
        }else if (command == "size") {
            cout << s.size() << "\n";
        }else if (command == "empty") {
            if (s.empty()) {
                cout << 1 << "\n";
            }else {
                cout << 0 << "\n";
            }
        }else if (command == "front") {
            if (s.empty()) {
                cout << "-1" << "\n";
            }else {
                cout << s.front() << "\n";
            }
        }else {
            if (s.empty()) {
                cout << "-1" << "\n";
            }else {
                cout << s.back() << "\n";
            }
        }
    }
    return 0;
}
