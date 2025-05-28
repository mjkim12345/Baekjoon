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
string s[100001];
map<string,int> num;
string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> str;
        s[i] = str;
        num.insert({str,i});
    }

    for (int i=1; i<=M; i++) {
        cin >> str;
        if (isdigit(str[0])) {
            cout << s[stoi(str)] << "\n";
        }else {
            cout << num.find(str)->second << "\n";
        }
    }

    return 0;
}
