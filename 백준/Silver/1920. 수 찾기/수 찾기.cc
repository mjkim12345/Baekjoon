#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie (0);
    cout.tie (0);

    int N;
    cin >> N;
    vector<int> num;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        num.push_back(a);
    }

    sort(num.begin(), num.end());

    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
        int a;
        cin >> a;
        cout << binary_search(num.begin(), num.end(),a) << "\n";
    }

    return 0;
}