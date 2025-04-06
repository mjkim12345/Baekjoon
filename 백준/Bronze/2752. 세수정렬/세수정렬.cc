#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    sort(arr , arr+3);

    for (int i=0; i<3; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}