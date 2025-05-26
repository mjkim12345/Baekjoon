#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <stack>
#include <utility>


using namespace std;

int n[200001];
int N, result;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    while (N--) {
        int a,b;
        cin >> a >>b;

        if (b) {
            if (n[a]) result++;
            else n[a] = 1;
        }else {
            if (n[a]) n[a] = 0;
            else if (n[a]==0) result++;
        }
    }

    for (int i=1; i<200001; i++) {
        result += n[i];
    }
    
    cout << result;
    return 0;
}
