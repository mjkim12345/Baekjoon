#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int result = 665;
    string temp;

    for(int i=0; i<n; i++){
        while(1){
            result++;
            temp = to_string(result);

            if(temp.find("666") != -1){
                break;
            }
        }
    }

    cout << result;
    return 0;
}