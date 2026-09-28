#include <bits/stdc++.h>
using namespace std;
bool tang(int a, int b) {
    return abs(a)<abs(b);
}
bool giam(int a, int b) {
    return abs(a)>abs(b);
}
int main () {
    int n;
    vector<int>a;
    vector<int>c;
    vector<int>l;
    string s;
    int x;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++) {
        getline(cin,s);
        stringstream ss(s);
        while (ss>>x) {
            a.push_back(x);
        }
        for (int j=0;j<a.size();j++) {
            if (a[j]%2==0) {
                c.push_back(a[j]);
            }
            else {
                l.push_back(a[j]);
            }
        }
        sort(c.begin(),c.end(),tang);
        sort(l.begin(),l.end(),giam);
    for (int j=0;j<c.size();j++) {
        cout<<c[j]<<" ";
    }
    for (int j=0;j<l.size();j++) {
        cout<<l[j]<<" ";
    }
    cout<<endl;
    l.clear();
    c.clear();
    a.clear();
    }
}
