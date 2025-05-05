#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,sum=0;
    cin >> N;
    int arr[N]={0,};

    for (int i=0; i<N; i++) {
        int a;
        cin >> a;

        sum +=a;
        arr[i] = a;
    }

    sort(arr,arr+N);

    double avg = (double)sum/N;
    if (avg<0 && avg>=-0.5) {
        cout << 0 << "\n";
    }else {
        cout << round(avg) << "\n";
    }                              // 산술평균

    int number = N/2;
    cout << arr[number] << "\n"; // 중앙값

    int count[8001]={0,};
    for (int i=0; i<N; i++) {
        if (arr[i]>=0) {
            count[arr[i]]++;
        }else {
            count[int(fabs(arr[i]))+4000]++;
        }
    }

    int max = count[0];
    for (int i=1; i<8001; i++) {
        if (max<count[i]) {
            max = count[i];
        }
    }

    vector<int> v;
    for (int i=0; i<8001; i++) {
        if (count[i] == max) {
            if (i<=4000) {
                v.push_back(i);
            }else {
                v.push_back((i-4000)*(-1));
            }
        }
    }

    sort(v.begin(), v.end());
    if (v.size() == 1) {
        cout << v[0] << "\n";
    }else {
        cout << v[1] << "\n";
    }


    cout << arr[N-1]-arr[0] << "\n"; // 범위

    return 0;
}
