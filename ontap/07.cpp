#include <bits/stdc++.h>
using namespace std;
template <typename T>
T mx (T &a, T&b, T&c) {
    T mx;
    if (a>b) {
        mx=a;
    }
    else mx=b;
    if (mx<c) {
        mx=c;
    }
    return mx;
}
int main () {
    char c;
    cin>>c;
    if (c=='a') {
        int x,y,z;
        cin>>x>>y>>z;
        cout<<mx(x,y,z);
    }
    else if (c=='b') {
        double x,y,z;
        cin>>x>>y>>z;
        cout<<fixed<<setprecision(2)<<mx(x,y,z);
    }
    if (c=='c') {
        char x,y,z;
        cin>>x>>y>>z;
        cout<<mx(x,y,z);
    }
}
