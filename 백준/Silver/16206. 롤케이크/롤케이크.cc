#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N,cut,a,b,num,tmp;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> cut;
    vector<int>v1;
    vector<int>v2;

    for(int i=0; i<N; i++){
        cin >> a;
        if(a<10) continue;
        else if(a == 10) num++;
        else if(a % 10 == 0) v1.push_back(a);
        else v2.push_back(a);
    }

    sort(v1.begin() , v1.end());
    sort(v2.begin(), v2.end());

    v1.insert(v1.end() , v2.begin() , v2.end());

    while(cut>0 && !v1.empty()){
        tmp = v1[0];
        b = tmp/10;
        if(tmp%10 == 0){
            if(b-1 <= cut){
                num +=b;
                cut -=(b-1);
            }else{
                num += cut;
                break;
            }
        }else{
            if(b <= cut) {
                num += b;
                cut -= b;
            }else{
                num += cut;
                break;
            }
        }
        v1.erase(v1.begin());
    }

    cout << num;

    return 0;
}