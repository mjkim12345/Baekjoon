#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <cctype>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int card[21]={0,};
    int card1[21]={0,};

    for (int i = 1; i <= 20; i++) {
        card[i] = i;
    }

    for (int i=0; i<10; i++) {
        int a,b;
        cin >> a >> b;

        for (int j=a; j<=b; j++) {
            card1[j] = card[j];
        }

        int number = b;

        for (int k=a; k<=b; k++) {
            card[k] = card1[number];
            number--;
        }
    }

    for (int i = 1; i <= 20; i++) {
        cout << card[i] << " ";
    }

    return 0;

}
