#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,k;
    cin>>n>>k;
    vector<int>a;
    for (int i=1;i<=n;i++) {
        a.push_back(i);
    }
    int x=0;
    while (a.size()>1) {
        x=(x+k-1)%a.size();
        a.erase(a.begin()+x);
    }
    cout<<a[0];
}
