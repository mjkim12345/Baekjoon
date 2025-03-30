#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

struct person
{
    int age, idx;
    string name;
};

bool compare(const person& now , const person& last)
{
    if(now.age != last.age) return now.age < last.age;
    return now.idx < last.idx;
}

int main(){

    int N;
    cin >> N;
    person people[100001];

    for(int i=0; i<N; i++){
        cin >> people[i].age >> people[i].name;
        people[i].idx = i;
    }

    sort(people , people + N , compare);

    for(int i=0; i<N; i++){
        cout << people[i].age << " " << people[i].name << "\n";
    }

    return 0;
}