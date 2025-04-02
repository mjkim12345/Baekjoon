#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int str_size = s.length();

    for (int i=1; i <= str_size; i++) {
        if (i%3==0) {
            cout << "..*.";
        }else {
            cout << "..#.";
        }

        if (i== str_size) {
            cout << ".\n";
        }
    }

    for (int i=1; i <= str_size; i++) {
        if (i%3==0) {
            cout << ".*.*";
        }else {
            cout << ".#.#";
        }

        if (i== str_size) {
            cout << ".\n";
        }
    }

    for (int i=0; i<str_size; i++) {
        if ((i+1)%3==0) {
            cout << "*." << s.at(i) << ".";
        }else if ((i+1)%3==1 && i>1) {
            cout << "*." << s.at(i) << ".";
        }
        else {
            cout << "#." << s.at(i) << ".";
        }

        if (i == str_size-1) {
            if ((i+1)%3==0) {
                cout << "*\n";
            }else {
                cout << "#\n";
            }
        }
    }

    for (int i=1; i <= str_size; i++) {
        if (i%3==0) {
            cout << ".*.*";
        }else {
            cout << ".#.#";
        }

        if (i== str_size) {
            cout << ".\n";
        }
    }

    for (int i=1; i <= str_size; i++) {
        if (i%3==0) {
            cout << "..*.";
        }else {
            cout << "..#.";
        }

        if (i== str_size) {
            cout << ".\n";
        }
    }
    return 0;
}