#include <iostream>
#include <stack>


using namespace std;


int main(){

    int k,a;
    cin >> k;
    stack<int> st;
    for(int i=0; i<k; i++){
        cin >> a;
        if(a == 0){
            st.pop();
        }else{
            st.push(a);
        }
    }

    int sum=0;
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }

    cout << sum;
    return 0;
}