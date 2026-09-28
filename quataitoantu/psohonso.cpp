#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
    int tu, mau;
};
istream& operator >> (istream& is, PhanSo& a) {
    is>>a.tu>>a.mau;
    return is;
}
ostream& operator << (ostream& os, PhanSo a) {
    os<<a.tu<<"/"<<a.mau;
    return os;
}
bool operator != (PhanSo a, PhanSo b) {
    return ((a.tu!=b.tu)&&(a.mau!=b.mau));
}
struct HonSo {
    int m;
    PhanSo n;
};
istream& operator >> (istream& nhap, HonSo& a) {
    nhap>>a.m>>a.n;
    return nhap;
}
ostream& operator << (ostream& xuat, HonSo a) {
    xuat<<a.m<<" "<<a.n;
    return xuat;
}
PhanSo rgPhanSo (HonSo a) {
    PhanSo kq;
    kq.tu=a.m*a.n.mau+a.n.tu;
    kq.mau=a.n.mau;
    int d=__gcd(kq.tu,kq.mau);
    kq.tu=kq.tu/d;
    kq.mau=kq.mau/d;
    return kq;
}
HonSo rgHonSo (HonSo a){
    HonSo kq;
    PhanSo k=rgPhanSo(a);
    kq.m=k.tu/k.mau;
    kq.n.mau=k.mau;
    kq.n.tu=k.tu-kq.m*k.mau;
    return kq;
}
bool operator != (HonSo a, HonSo b ){
    return (a.m!=b.m&&a.n!=b.n);
}
int tongCacThanhPhan (HonSo a ){
    return a.m+a.n.mau+a.n.tu;
}
bool operator > (HonSo a, HonSo b) {
    return (tongCacThanhPhan(a)>tongCacThanhPhan(b));
}
int main () {
    HonSo a,b;
    cin>>a>>b;
    string c;
    cin>>c;
    if (a !=b) cout<<"TRUE";
    else cout<<"FALSE";
    cout<<endl;
    if ( a > b) cout<<"TRUE";
    else cout<<"FALSE";
    cout<<endl;
    if (c=="true") {
        cout<<rgHonSo(a)<<endl<<rgHonSo(b);
    }
    else cout<<rgPhanSo(a)<<endl<<rgPhanSo(b);
}
