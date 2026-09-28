#include <bits/stdc++.h>
using namespace std;
int main () {
    vector <long long> v;
    int n,s=0,dem=0;
    cin>>n;
    for (int i=0;i<n;i++) {
        long long x;
        cin>>x;
        v.push_back(x);
        s+=v[i];
    }
    double tb= (double) s/n;
    for (int i=0;i<n;i++)
        if (v[i]>tb) dem++;
    cout<<dem<<endl;
    for (int i=0;i<n;i++)
        if (v[i]>tb)
            cout<<v[i]<<" ";
    if (dem==0) cout<<-1;

}
