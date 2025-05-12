#include <algorithm>
#include <iostream>
#include <utility>
#include <cmath>
#include <vector>


int v[202]={};
int v1[202]={};
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N,V,count=0;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }
    cin >> V;


    for (int i=0; i<N; i++) {
        v1[v[i]+100] +=1;
    }

    count = v1[V+100];

    cout << count;
    return 0;
}
