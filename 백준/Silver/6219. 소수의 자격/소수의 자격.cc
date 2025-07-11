#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <complex>
#include <list>
#include <map>
#include <stack>
#include <utility>
#include <variant>

using namespace std;

int A,B;
string arr[2000001];
string D;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> B >> D;

    queue<string> a;
    for (int i=A; i<=B; i++) {
        int max = sqrt(i);
        if (max==1 && i!=1) a.push(to_string(i));
        else {
            for (int j=2; j<=max; j++) {
                if (i%j==0) break;
                if (j==max) a.push(to_string(i));
            }
        }
    }
    int b = a.size();
    int count=0;

    while (b--) {
        string d = a.front();
        a.pop();

        if (d.find(D)!=variant_npos) {
            count++;
        }
    }

    cout << count;


    return 0;
}
