#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;

    int num[50][3];

    for(int i=0; i<N; i++){
        for(int j=0; j<2; j++){
            cin >> num[i][j];
        }
        num[i][2] = 1;
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(num[i][0]<num[j][0] && num[i][1] < num[j][1]){
                num[i][2]++;
            }
        }
    }

    for(int i=0; i<N; i++){
        cout << num[i][2] << " ";
    }




    
    return 0;
}