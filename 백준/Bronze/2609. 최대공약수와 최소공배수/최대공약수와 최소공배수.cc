#include <iostream>

using namespace std;

int gcd(int a , int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main(){
    int a,b;
    cin >> a >> b;

    int result;
    result = gcd(a,b);
    

    int result2; // 최소 공배수
    result2 = a*b / result;

    cout << result << endl << result2;

    

    
    return 0;
}