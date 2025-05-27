#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <stack>
#include <string.h>
#include <utility>


using namespace std;

int arr[21];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M;
    cin >> M;

    while (M--) {
        string s;
        int x;
        cin >> s;

        if (s== "all") {
            for (int j=1; j<21; j++) {
                arr[j]=1;
            }
            continue;
        }
        if (s=="empty") {
            memset(arr,0,sizeof(arr));
            continue;
        }
        cin >> x;

        if (s== "add") {
            if (arr[x]==0) {
                arr[x] = 1;
            }
        }else if (s == "check") {
            if (arr[x]==1) {
                cout<<1<<"\n";
            }else {
                cout<<0<<"\n";
            }
        }else if (s =="remove") {
            if (arr[x]==1) {
                arr[x]=0;
            }
        }else if (s == "toggle") {
            if (arr[x]==1) {
                arr[x]=0;
            }else if (arr[x]==0) {
                arr[x]=1;
            }
        }
    }
    return 0;
}
