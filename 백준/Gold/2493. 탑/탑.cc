#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int N;
stack<pair<int, int>> tower;
#define X first
#define Y second
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;


    tower.push({100000001,0});

    for (int i=1; i<=N; i++) {
        int height;
        cin >> height;
        while (tower.top().X<height)
            tower.pop();
        cout << tower.top().Y <<" ";
        tower.push({height,i});
    }
    return 0;
}