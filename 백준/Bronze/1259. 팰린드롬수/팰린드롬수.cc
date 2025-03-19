#include <iostream>

using namespace std;

int main(){

    bool a = true;
    while(a){
        int b;
        cin >> b;

        if(b>=10000){
            if(b/10000 == b%10){
                if((b/1000)%10 == (b/10)%10){
                    cout << "yes" << endl;
                }else{
                    cout << "no" << endl;
                }
            }else{
                cout << "no" << endl;
            }
        }else if(b>=1000){
            if(b/1000 == b%10){
                if((b/100)%10 == (b/10)%10){
                    cout << "yes" << endl;
                }else{
                    cout << "no" << endl;
                }
            }else{
                cout << "no" << endl;
            }
        }
        else if(b>=100){
            if(b/100 == b%10){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }
        else if(b>=10){
            if(b/10 == b%10){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }
        else if(b>0){
            cout << "yes" << endl;
        }
        else if(b==0){
            a = false;
        }else{
            cout << "no" << endl;
        }
    }

    return 0;
}