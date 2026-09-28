#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
    int tu,mau;
    void rg (){
        int d=__gcd(tu,mau);
        tu=tu/d;
        mau=mau/d;
        if (mau<0) {
            tu=-tu;
            mau=-mau;
        }
    }
};
istream& operator >> (istream& is, PhanSo& x) {
    is>>x.tu>>x.mau;
    return is;
}
ostream& operator << (ostream& os, PhanSo x) {
    os<<x.tu<<"/"<<x.mau;
    return os;
}
bool operator == (PhanSo a, PhanSo b){
    a.rg();
    b.rg();
    if (a.tu==b.tu&&a.mau==b.mau) return true;
    return false;
}
bool operator != (PhanSo a, PhanSo b) {
    return !(a==b);
}
PhanSo operator + (PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu=a.tu*b.mau+a.mau*b.tu;
    kq.mau=a.mau*b.mau;
    kq.rg();
    return kq;
}
struct mangPhanSo {
    int n;
    PhanSo a[100];
    PhanSo& operator[] (int i) {
        return a[i];
    }
};
istream& operator >> (istream& nhap, mangPhanSo& x){
    x.n=0;
    while (nhap>>x[x.n])
        x.n++;
    return nhap;
}
ostream& operator << (ostream& xuat, mangPhanSo x){
    for (int i=0;i<x.n;i++)
        xuat<<x[i];
    return xuat;
}
int main() {
    mangPhanSo x;
    cin>>x;
    PhanSo kq;kq.tu=0;kq.mau=1;
    for (int i=0;i<x.n;i++) {
        kq=kq+x[i];
    }
    cout<<kq;
}
