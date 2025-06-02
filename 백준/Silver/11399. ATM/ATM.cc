#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <map>
#include <stack>
#include <string.h>
#include <utility>


using namespace std;
int N,sum;
int arr[1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+N);

    for (int i=1; i<N; i++) {
        arr[i] += arr[i-1];
    }

    for (int i=0; i<N; i++) {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
