#include <bits/stdc++.h>
using namespace std;
int main () {
    string s,t;
    vector<string>dao;
    getline(cin,s);
    stringstream ss(s);
    while (ss>>t) {
        dao.push_back(t);
    }
    for (int i=dao.size()-1;i>=0;i--) {
        cout<<dao[i]<<" ";
    }
}
