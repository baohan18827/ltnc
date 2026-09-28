#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
        int tu,mau;
};
istream& operator >> (istream& is, PhanSo& p) {
    is>>p.tu>>p.mau;
    return is;
}
ostream& operator << (ostream& os, PhanSo p) {
    os<<p.tu<<"/"<<p.mau;
    return os;
}
PhanSo operator ++ (PhanSo p) {
    PhanSo kq;
    kq.tu=p.tu+1;
    kq.mau=p.mau;
    return kq;
}
PhanSo operator -- (PhanSo p) {
    PhanSo kq;
    kq.tu=p.tu-1;
    kq.mau=p.mau;
    return kq;
}
int main () {
    PhanSo p,p1;
    string s;
    cin>>p>>s;
    cout<<p<<endl;
    if (s=="++")
    p1=++p;
    else p1=--p;
    cout<<p1;
}
