#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
    int tu,mau;
    void rg () {
       int d=__gcd(tu,mau);
        tu=tu/d;
        mau=mau/d;
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }
};
istream& operator>>(istream& is, PhanSo& a) {
    is >> a.tu >> a.mau;
    a.rg();
    return is;
}

ostream& operator<<(ostream& os, PhanSo a) {
    os << a.tu << "/" << a.mau << " ";
    return os;
}
struct mang {
    int n;
    PhanSo a[100];
    PhanSo& operator [] (int i) {
        return a[i];
    }
};
istream& operator >> (istream& is, mang& a ){
    for (int i=0;i<a.n;i++)
        is>>a[i];
    return is;
}
ostream& operator << (ostream& os, mang a){
    for (int i=0;i<a.n;i++)
        os<<a[i];
    return os;
}
bool operator < (PhanSo a, PhanSo b) {
    return a.tu*b.mau<a.mau*b.tu;
}
mang dao (mang a ) {
    for (int i=0;i<a.n;i++)
        for (int j=i+1;j<a.n;j++)
            if (a[j]<a[i]) {
                swap (a[j],a[i]);
            }
    return a;
}
int main (){
    mang a;
    cin>>a.n>>a;
    cout<<dao(a);

}

