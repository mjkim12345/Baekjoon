#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    for (int i = 5; N / i >= 1; i *= 5) {
        count += N / i;
    }

    cout << count << endl;
    return 0;
}
