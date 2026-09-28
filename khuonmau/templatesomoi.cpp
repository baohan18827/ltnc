#include <bits/stdc++.h>
using namespace std;
template <typename T>
struct mang {
    int n;
    T a[1000];
    T& operator [] (int i){
        return a[i];
    }
};
template <typename T>
istream& operator >> (istream& is, mang<T>& m){
    m.n=0;
    while (is>>m[m.n])
        m.n++;
    return is;
}
struct SoMoi {
    int x;
};
istream& operator >> (istream& nhap, SoMoi& m){
    nhap>>m.x;
    return nhap;
}
ostream& operator << (ostream& xuat, SoMoi m){
    xuat<<"[SoMoi] "<<m.x;
    return xuat;
}
int tong (SoMoi m) {
    int s=0;
    while (m.x>0) {
        s+=m.x%10;
        m.x/=10;
    }
    return s;
}
bool operator > (SoMoi m, SoMoi y) {
    return tong(m)>tong(y);
}
SoMoi operator + (SoMoi m, SoMoi y) {
    SoMoi kq;
    kq.x=tong(m)+tong(y);
    return kq;
}
int main() {
    char s;
    cin>>s;
    if (s=='N') {
        mang<int>m;
        cin>>m;
        int mx=m[0]; int t=m[0];
        for (int i=1;i<m.n;i++) {
            if (m[i]>mx) mx=m[i];
            t+=m[i];
        }
        int sl=0;
        for (int i=0;i<m.n;i++)
            if (m[i]==mx) sl++;
        cout<<mx<<endl<<sl<<endl<<t;

    }
    else if (s=='M'){
        mang<SoMoi>m;
        cin>>m;
        SoMoi mx=m[0]; SoMoi t;t.x=tong(m[0]);
        for (int i=1;i<m.n;i++) {
            if (m[i]>mx) mx=m[i];
            t=t+m[i];
        }
        int sl=0;
        for (int i=0;i<m.n;i++)
            if (tong(m[i])==tong(mx)) sl++;
        cout<<mx<<endl<<sl<<endl<<t;
    }
}
