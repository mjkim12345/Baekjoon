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
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if (n==0) {
        cout << 0;
        return 0;
    }
    int numbers[n];
    for (int i=0; i<n; i++) {
        cin >> numbers[i];
    }

    sort(numbers, numbers+n);

    double avg_x = ((double)n * 15) /100;
    int avg_y = floor(avg_x+0.5);

    int sum=0;

    for ( int i=avg_y; i<n-avg_y; i++) {
        sum += numbers[i];
    }

    int result = floor((double)sum/(n-2*avg_y)+0.5);
    cout << result;

    return 0;

}
