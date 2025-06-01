#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <map>
#include <stack>
#include <string.h>
#include <utility>


using namespace std;
long long num[300001];
long long result;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,K;
    cin >> N >> K;
    cin >> num[0];
    for (int i=1; i<N; i++) {
        cin >> num[i];
        num[i] += num[i-1];
    }

    sort(num, num+N,greater<long long>());

    for (int i=0; i<K; i++) {
        result += num[i];
    }

    cout << result;
    return 0;
}
