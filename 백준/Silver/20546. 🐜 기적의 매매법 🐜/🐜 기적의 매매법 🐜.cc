#include <iostream>

using namespace std;

int main(){
    int cash;
    cin >> cash;
    
    int arr[14];
    for(int i=0; i<14; i++){
        cin >> arr[i];
    }
    
    int jun = cash;
    int jun1 = 0;
    int sung = cash;
    int sung1 = 0;
    
    for(int i=0; i<14; i++){
        if(jun>=arr[i]){
            jun1 += (jun / arr[i]);
            jun = jun % arr[i];
        }
    }
    
    for(int i=0; i<=10; i++){
        if(arr[i]>arr[i+1] && arr[i+1]>arr[i+2]){
            if(sung>=arr[i+3]){
                sung1 += sung / arr[i+3];
                sung = sung1 % arr[i+3];
            }
        }else if(arr[i]<arr[i+1] && arr[i+1] < arr[i+2]){
            if(sung1>0){
                sung += sung1 * arr[i+3];
                sung1 = 0;
            }
        }
    }
    int jun_sum = jun + jun1 * arr[13];
    int sung_sum = sung + sung1 * arr[13];
    
    if(jun_sum > sung_sum){
        cout << "BNP";
    }else if(jun_sum < sung_sum){
        cout << "TIMING";
    }else{
        cout << "SAMESAME";
    }
    
    return 0;
}