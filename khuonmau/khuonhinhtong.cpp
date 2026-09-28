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
istream& operator >> (istream& is, PhanSo& a) {
    is>>a.tu>>a.mau;
    return is;
}
ostream& operator << (ostream& os, PhanSo a) {
    os<<a.tu<<"/"<<a.mau;
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
int main() {
    char s;
    mang<int>m;
    m.n=0;
    mang<PhanSo>k;
    k.n=0;
    int sn=0;
    PhanSo sp;
    sp.tu=0;
    sp.mau=1;
    while (cin>>s) {
        if (s=='a') {
            cin>>m[m.n];
            sn+=m[m.n];
            m.n++;
        }
        else if (s=='b') {
            cin>>k[k.n];
            sp.tu=sp.tu*k[k.n].mau+sp.mau*k[k.n].tu;
            sp.mau=sp.mau*k[k.n].mau;
            sp.rg();
            k.n++;
        }
    }
    if (m.n!=0) cout<<sn<<endl;
    else cout<<"khong co\n";
    if (k.n!=0) cout<<sp;
    else cout<<"khong co";
}
