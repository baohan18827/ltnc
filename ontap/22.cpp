#include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int>a;
    int x;
    while (cin>>x) {
        cout<<x<<" ";
        a.push_back(x);
    }
    reverse(a.begin(),a.end());
    cout<<endl;
    for (int i=0;i<a.size();i++) {
        cout<<a[i]<<" ";
    }
}
