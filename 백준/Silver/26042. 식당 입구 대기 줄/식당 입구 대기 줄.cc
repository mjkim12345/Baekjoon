#include <iostream>
#include <queue>


using namespace std;


int main(){

    queue<int> q1;

    int n, size,min_last=100000, max_size=0;
    cin >> n;
    int a,b;

    for(int i=0; i<n; i++){
        cin >> a;

        if(a == 1){
            cin >> b;
            q1.push(b);
        }
        else{
            q1.pop();
        }

        size = q1.size();
        if(max_size<size){
            max_size = size;
            min_last = q1.back();
        }else if(max_size == size){
            if(min_last>q1.back()){
                min_last = q1.back();
            }
        }    
    }
    cout << max_size << " " << min_last ;

    return 0;
}