#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string fizz[3];
    long num_next;

    for (int i=0; i<3; i++) {
        cin >> fizz[i];
    }

    if (atoi(fizz[0].c_str())!=0) {
        num_next = atoi(fizz[0].c_str());
        num_next +=3;

        if (num_next %3 ==0 && num_next %5==0) {
            cout << "FizzBuzz";
        }else if (num_next % 3==0 && num_next % 5 !=0 ) {
            cout << "Fizz";
        }else if (num_next % 3!=0 && num_next % 5 ==0) {
            cout << "Buzz";
        }else {
            cout << num_next;
        }

    }else if (atoi(fizz[1].c_str())!=0) {
        num_next = atoi(fizz[1].c_str());
        num_next +=2;

        if (num_next %3 ==0 && num_next %5==0) {
            cout << "FizzBuzz";
        }else if (num_next % 3==0 && num_next % 5 !=0 ) {
            cout << "Fizz";
        }else if (num_next % 3!=0 && num_next % 5 ==0) {
            cout << "Buzz";
        }else {
            cout << num_next;
        }
    }else if (atoi(fizz[2].c_str())!=0) {
        num_next = atoi(fizz[2].c_str());
        num_next +=1;

        if (num_next %3 ==0 && num_next %5==0) {
            cout << "FizzBuzz";
        }else if (num_next % 3==0 && num_next % 5 !=0 ) {
            cout << "Fizz";
        }else if (num_next % 3!=0 && num_next % 5 ==0) {
            cout << "Buzz";
        }else {
            cout << num_next;
        }
    }else {
        cout << 4;
    }


    return 0;
}