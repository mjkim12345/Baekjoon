#include <bits/stdc++.h>

using namespace std;

string str;
string result;
int main() {
    getline(cin, str);

    for (int i=0; i<str.size(); i++) {
        if (str[i]>= 65 && str[i]<=91) {
            if (str[i]-'A'>12) {
                result.push_back(str[i]-13);
            }else result.push_back(str[i]+13);
        }else if (str[i]>=97 && str[i]<=123) {
            if (str[i]-'a'>12) result.push_back(str[i]-13);
            else result.push_back(str[i]+13);
        }else {
            result.push_back(str[i]);
        }
    }

    cout << result;
}