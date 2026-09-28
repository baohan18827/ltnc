#include <bits/stdc++.h>
using namespace std;
bool snt (long long x) {
    if (x<2) return false;
    else {
        for (int i=2;i*i<=x;i++) {
            if (x%i==0) return false;
        }
    }
    return true;
}
int main () {
    vector<long long>a;
    long long x;
    while (cin>>x) {
        a.push_back(x);
        }
    a.erase(remove_if(a.begin(), a.end(), snt), a.end());
    sort(a.begin(),a.end());
    for (int i=0;i<a.size();i++) {
        cout<<a[i]<<" ";
    }
}
