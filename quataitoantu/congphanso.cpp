#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
    int tu,mau;
};
istream& operator>>(istream& is, PhanSo &p);
ostream& operator<<(ostream& os, PhanSo p);

PhanSo operator+(PhanSo a, PhanSo b);

int main () {
    PhanSo p1,p2,p3;

    cin>>p1>>p2;
    cout<<p1<<endl<<p2<<endl;
    p3=p1+p2;
    cout<<p3;
    return 0;

}

istream& operator>>(istream& is, PhanSo &p){
    is>>p.tu>>p.mau;
    return is;
}

ostream& operator<<(ostream& os, PhanSo p){
    os<<p.tu<<"/"<<p.mau;
    return os;
}
PhanSo operator+(PhanSo a, PhanSo b){
    PhanSo kq;
    kq.tu=a.tu*b.mau + a.mau*b.tu;
    kq.mau=a.mau*b.mau;
    return kq;
}
