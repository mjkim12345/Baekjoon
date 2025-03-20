#include <iostream>
#include <algorithm>

using namespace std;

int factorial(int a){
    int b=1;
    for(int i=1; i<=a; i++){
        b *=i;
    }

    return b;
}

int main(){
    int N ,K;
    cin >> N >> K;

    int result = factorial(N) / (factorial(N-K) * factorial(K));

    cout << result;

    return 0;
}