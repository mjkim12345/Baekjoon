#include <algorithm>
#include <iostream>
#include <utility>
#include <cmath>
#include <vector>


using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    string s, s1;
    while (N--) {
        int test1[50]={};
        int test2[50]={};
        cin >> s >> s1;
        for (char c : s) {
            test1[c-'a']++;
        }

        for (char c : s1) {
            test2[c-'a']++;
        }

        if (equal(test1,test1 +50, test2)) {
            cout << "Possible" << "\n";
        }else {
            cout << "Impossible"<< "\n";
        }
    }


    return 0;
}
