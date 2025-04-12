#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long N;
    cin >> N;
    cin.ignore();
    string s[N];


    for (int i=0; i<N; i++) {
        getline(cin,s[i]);
    }

    for (int i=0; i<N; i++) {
        int number[128] = {0,};
        int check =3000;

        for (int j=0; j<s[i].length(); j++) {
            if (isalpha(s[i][j])) {
                number[s[i][j]]++;
            }
        }

        for (int k=65; k<=90; k++) {
            int sum = number[k] + number[k+32];
            if (sum<check) {
                check = sum;
            }
        }

        if (check == 1) {
            cout << "Case " << i+1 << ": Pangram!" << "\n";
        }else if (check == 2) {
            cout << "Case " << i+1 << ": Double pangram!!" << "\n";
        }else if (check >= 3) {
                cout << "Case " << i+1 << ": Triple pangram!!!" << "\n";
        }else if (check == 0){
            cout << "Case " << i+1 << ": Not a pangram" << "\n";
        }

    }

    return 0;

}
