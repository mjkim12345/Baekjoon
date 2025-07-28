#include <ranges>
#include <ranges>
#include <bits/stdc++.h>
using namespace std;

int N;
string pt,in;
vector<string> pt_r;
string in_r[100];
vector<string> result;

void split(const string& input , string delimiter) {
    auto start=0;
    auto end = input.find(delimiter);
    pt_r.push_back(input.substr(start, end-start));
    start = end+delimiter.size();
    pt_r.push_back(input.substr(start));
}

int main() {
    cin >> N >> pt;
    split(pt,"*");

    for (int i=0; i<N; i++) {
        cin >> in;

        if (in.size()<pt_r[0].size()+pt_r[1].size()) {
            cout << "NE" << "\n";
            continue;
        }

        in_r[0] = in.substr(0,pt_r[0].size());
        in_r[1] = in.substr(in.size()-pt_r[1].size());

        if (in_r[0]==pt_r[0]) {
            if (in_r[1]==pt_r[1]) {
                cout << "DA" << "\n";
            }else {
                cout << "NE" << "\n";
            }
        }else {
            cout << "NE" << "\n";
        }
    }
    return 0;
}
