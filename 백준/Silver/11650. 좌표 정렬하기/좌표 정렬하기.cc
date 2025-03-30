#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


struct position {
    int x;
    int y;
};

bool compare(const position front , const position back) {
    if (front.x == back.x) return front.y < back.y;
    return front.x < back.x;
}

int main() {
    int N;
    cin >> N;

    position arr[100001];
    for (int i = 0; i < N; i++) {
        cin >> arr[i].x >> arr[i].y;
    }

    sort(arr, arr+ N ,compare);

    for (int i=0; i<N; i++) {
        cout << arr[i].x << " " << arr[i].y << "\n";
    }

    return 0;
}