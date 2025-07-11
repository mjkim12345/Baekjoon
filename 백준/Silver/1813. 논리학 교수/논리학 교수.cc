#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <list>
#include <map>
#include <stack>
#include <string.h>
#include <utility>

using namespace std;

int N;
int res[51];
int arr[51];
int num;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    while (N--) {
        int a;
        cin >> a;
        res[a]++;
    }


    for (int i=1; i<51; i++) {
        if (res[i]==i) {
            num = i;
        }
    }

    if (num==0 && res[0]!=0) {
        cout << -1;
    }else if (num==0 && res[0]==0) {
        cout << 0;
    }else {
        cout << num;
    }



    return 0;
}
