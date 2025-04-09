#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int arr[500001];
int arr2[500001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N,M;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> arr2[i];
    }

    sort(arr , arr + N);

    for (int i=0; i<M; i++) {
        int count =upper_bound(arr,arr+N,arr2[i])-lower_bound(arr,arr+N,arr2[i]);
        cout << count << " ";
    }

    



    return 0;
}