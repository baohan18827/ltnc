#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m,x,y,dem=0;
    vector<int>a;
    vector<int>b;
    cin>>n>>m;
    while (n>0) {
        cin>>x;
        a.push_back(x);
        n--;
    }
    while (m>0) {
        cin>>y;
        b.push_back(y);
        m--;
    }
    for (int i=0;i<b.size();i++) {
        bool check=false;
        for (int j=0;j<a.size();j++) {
            if (b[i]==a[j]) {
                check=true;
                break;
            }
        }
        if (!check) dem++;
    }
    cout<<dem;

}
