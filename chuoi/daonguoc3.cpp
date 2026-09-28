#include <bits/stdc++.h>
using namespace std;

int main () {
    string c;
    getline(cin,c);
    stringstream ss(c);
    string x;
    vector <string>a;
    while (ss>>x) {
        a.push_back(x);
    }
    for (int i=a.size()-1;i>=0;i--) {
        cout<<a[i]<<" ";
    }
}
