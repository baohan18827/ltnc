#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,q,s;
    cin>>n>>q;
    vector<int>a;
    for (int i=0;i<n;i++) {
        cin>>s;
        a.push_back(s);
    }
     int tmp,x,k;
    while (q--) {
        cin>>tmp;
        if (tmp==1) {
            cin>>x>>k;
        a.insert(a.begin()+k,x);
        }
       if (tmp==2) {
        cin>>k;
        a.erase(a.begin()+k);
       }
        if (tmp==3){
        cin>>k;
        cout<<a[k];
       }
    }
}
