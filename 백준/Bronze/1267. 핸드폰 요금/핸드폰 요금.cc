#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <cctype>
#include <algorithm>

using namespace std;

int youngsick(int a) {
    int b = a/30;
    return 10*(b+1);
}

int minsick(int a) {
    int b = a/60;
    return 15*(b+1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N,sum1=0,sum2=0;
    cin >> N;
    int arr[N];

    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<N; i++) {
        sum1 += youngsick(arr[i]);
        sum2 += minsick(arr[i]);
    }

    if (sum1 == sum2) {
        cout << "Y M " << sum1 << "\n";
    }else if (sum1 < sum2) {
        cout << "Y " << sum1 << "\n";
    }else {
        cout << "M " << sum2 << "\n";
    }

    return 0;

}
