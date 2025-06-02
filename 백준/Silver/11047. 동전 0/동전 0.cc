#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <map>
#include <stack>
#include <string.h>
#include <utility>


using namespace std;
int N,K;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
    int arr[N];

    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    int count=0;
    for (int i=N-1; i>=0; i-- ) {
        if (K==arr[i]) {
            count++;
            break;
        }

        if (K>arr[i]) {
            count += K/arr[i];
            K %= arr[i];
        }

        if (K==0) {
            break;
        }
    }

    cout << count;
    return 0;
}
