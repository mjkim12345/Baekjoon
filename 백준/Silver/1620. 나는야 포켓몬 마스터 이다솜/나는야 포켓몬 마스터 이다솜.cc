#include <bits/stdc++.h>

using namespace std;

int N,M;
string str;
string book_a[100001];
map<string,int> book;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;

    for (int i=1; i<=N; i++) {
        cin >> str;
        book_a[i] = str;
        book.insert({str,i});
    }

    for (int i=0; i<M; i++) {
        string b;
        cin >> b;

        if (atoi(b.c_str())==0) {
            cout << book[b] << "\n";
        }else {
            cout << book_a[atoi(b.c_str())] << "\n";
        }
    }
    return 0;
}