#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool check(string a ,string b){
    if(a.size() == b.size()){
        return a < b;
    }else{
        return a.size() < b.size();
    }
}


int main(){

    int n;
    cin >> n;
    string word[n];

    for(int i=0; i<n; i++){
        cin >> word[i];
    }

    sort(word, word+n, check);

    for(int i=0; i<n; i++){
        if(word[i]==word[i-1]){
            continue;
        }else{
            cout << word[i] << endl;
        }
    }
    return 0;
}