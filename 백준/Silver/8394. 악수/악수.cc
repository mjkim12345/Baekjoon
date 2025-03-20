#include <iostream>


using namespace std;


int main(){

    int n;
    cin >> n;

    if(n==1){
        cout << 1;
        return 0;
    }else if(n==2){
        cout << 2;
        return 0;
    }

    int a =1;
    int b =2;
    int result =0;
    for(int i=3; i<=n; i++){
        result = (a+b)%10;
        a =b;
        b = result;
    }

    cout << result;
    return 0;
}