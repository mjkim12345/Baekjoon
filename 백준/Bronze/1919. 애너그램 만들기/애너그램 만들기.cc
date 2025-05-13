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

    string s1, s2;
    int count =0;
    int check1[30]={};
    int check2[30]={};
    cin >> s1 >> s2;
    for (char c : s1) {
        check1[c-'a']++;
    }

    for (char c : s2) {
        check2[c-'a']++;
    }

    for (int i=0; i<26; i++) {
        if (check1[i]>check2[i]) {
            while (check1[i]!=check2[i]) {
                check1[i]--;
                count++;
            }
        }else if (check1[i]<check2[i]) {
            while (check1[i]!=check2[i]) {
                check2[i]--;
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
