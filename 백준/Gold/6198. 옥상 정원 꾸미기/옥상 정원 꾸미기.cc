#include <iostream>
#include <stack>
#include <vector>

using namespace std;


stack<int> building;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    long long sum=0;
    cin >> N;

    int height_f = 1000000001;
    building.push(height_f);
    for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        while (a>=building.top()) {
            building.pop();
        }
        sum += building.size()-1;
        building.push(a);
    }

    cout << sum;
    return 0;
}