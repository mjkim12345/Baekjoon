#include <iostream>

using namespace std;



int main(){
    int home[15][15] = {0,};
    int c;
    cin >> c;
    for(int i=0; i<15; i++){
        home[0][i] = i;
    }

    for(int i=1; i<15; i++){
        for(int j=1; j<15; j++){
            for(int k=1; k<=j; k++){
                home[i][j] += home[i-1][k];
            }
        }
    }

    while(c--){
        int a,b;
        cin >> a >> b;
        cout << home[a][b] << endl;
    }


    return 0;
}