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
    x.rg();
    os<<x.tu<<"/"<<x.mau;
    return os;
}
struct SoPhuc {
    int a,b;
};
istream& operator >> (istream& nhap, SoPhuc& x){
    nhap>>x.a>>x.b;
    return nhap;
}
ostream& operator << (ostream& xuat, SoPhuc x){
    if (x.a!=0&&x.b!=0) {
        if (x.b>0) {
            xuat<<x.a;
            if (x.b!=1) xuat<<"+"<<x.b<<"i";
            else xuat<<"+i";
        }
        else {
                if (x.b!=-1) xuat<<x.a<<"-"<<-x.b<<"i";
                else xuat<<x.a<<"-i";
        }
    }
    else if (x.b==0) xuat<<x.a;
    else if (x.a==0) {
        if (x.b>0) {
            if (x.b!=1) xuat<<x.b<<"i";
            else xuat<<"i";
        }
        else {
                if (x.b!=-1) xuat<<"-"<<-x.b<<"i";
                else xuat<<"-i";
        }
    }
    return xuat;
}
SoPhuc operator + (SoPhuc x, SoPhuc y) {
    SoPhuc kq;
    kq.a=x.a+y.a;
    kq.b=x.b+y.b;
    return kq;
}
SoPhuc operator + (SoPhuc x, int i) {
    SoPhuc kq;
    kq.a=x.a+i;
    kq.b=x.b;
    return kq;
}
SoPhuc operator + (SoPhuc x, PhanSo p) {
    SoPhuc kq;
    kq.a=x.a+p.tu;
    kq.b=x.b+p.mau;
    return kq;
}
int main() {
    SoPhuc x,kq;
    cin>>x;
    cout<<x<<endl;
    char s;
    cin>>s;
    if (s=='i') {
        int i;
        cin>>i;
        cout<<i<<endl;
        kq=x+i;
        cout<<kq;
    }
    else if (s=='z') {
        SoPhuc i;
        cin>>i;
        cout<<i<<endl;
        kq=x+i;
        cout<<kq;
    }
    if (s=='p') {
        PhanSo i;
        cin>>i;
        i.rg();
        cout<<i<<endl;
        kq=x+i;
        cout<<kq;
    }
}
