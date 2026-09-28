#include <bits/stdc++.h>
using namespace std;
struct SoMoi {
    int a;
};
istream& operator >> (istream& is, SoMoi& x) {
    is>>x.a;
    return is;
}
ostream& operator << (ostream& os, SoMoi x) {
    os<<"[SoMoi] "<<x.a<<endl;
    return os;
}
int tong (SoMoi x) {
    int s=0;
    while (x.a>0) {
        s+=x.a%10;
        x.a/=10;
    }
    return s;
}
bool operator > (SoMoi x, SoMoi y) {
    return tong(x)>tong(y);
}
SoMoi operator + (SoMoi x, SoMoi y) {
    SoMoi kq;
    kq.a=tong(x)+tong(y);
    return kq;
}
int main () {
    SoMoi x,y,z;
    cin>>x>>y;
    cout<<x<<y;
    if (x>y) cout<<"true";
    else cout<<"false";
    cout<<endl;
    z=x+y;
    cout<<z;
}
