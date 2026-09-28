#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
    int tu,mau;
    void rg() {
        int d=__gcd(tu,mau);
        tu=tu/d;
        mau=mau/d;
        if (mau<0) {
            tu=-tu;
            mau=-mau;
        }
    }
};
istream& operator >> (istream& is, PhanSo& p) {
    is>>p.tu>>p.mau;
    return is;
}
ostream& operator << (ostream& os, PhanSo p) {
    p.rg();
    os<<p.tu<<"/"<<p.mau;
    return os;
}
template <typename T>
struct mang {
    int n;
    T a[100];
    T& operator [] (int i) {
        return a[i];
    }
};
template <typename T>
void nhap (mang<T>& p) {
    p.n=0;
    while (cin>>p[p.n])
        p.n++;
}
PhanSo operator + (PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu=a.tu*b.mau+a.mau*b.tu;
    kq.mau=a.mau*b.mau;
    return kq;
}
int main() {
    char s;
    cin>>s;
    if (s=='a') {
        mang<int>x;
        nhap(x);
        int tong=0;
        for (int i=0;i<x.n;i++)
            tong+=x[i];
        cout<<tong;
    }
    else if (s=='b') {
        mang<PhanSo>x;
        nhap(x);
        PhanSo tong;
        tong.tu=0; tong.mau=1;
        for (int i=0;i<x.n;i++)
            tong=tong+x[i];
        cout<<tong;
    }
}


