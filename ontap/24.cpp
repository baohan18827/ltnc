#include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int>a;
    int x;
    while (cin>>x) {
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for (int i=0;i<a.size();i++) {
        cout<<a[i]<<" ";
    }
}
