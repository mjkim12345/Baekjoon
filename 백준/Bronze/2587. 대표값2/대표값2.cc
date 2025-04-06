#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int sum=0;
    int arr[5];
    for (int i=0; i<5; i++) {
        cin >> arr[i];
        sum +=arr[i];
    }
    int result = sum/5;

    sort(arr, arr+5);
    cout << result << "\n" << arr[2];


    return 0;
}