#include <iostream>
#include <utility>
#include <cmath>
#include <vector>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    int freq[10] = {0,};

    while (N>0) {
        int a = N%10;
        if (a==9) freq[6]++;
        else freq[a]++;
        N /=10;
    }

    if (freq[6]%2 == 1) {
        freq[6] = freq[6]/2 + 1;
    }else if (freq[6]%2 == 0) {
        freq[6] /= 2;
    }

    int max1 = 0;

    for (int i : freq) {
        if (max1<i) max1 = i;
    }

    cout << max1;
    return 0;
}
