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
    a.rg();
    return is;
}
ostream& operator << (ostream& os, PhanSo a) {
    os<<a.tu<<"/"<<a.mau;
    return os;
}
bool operator < (PhanSo a, PhanSo b) {
    return a.tu*b.mau<a.mau*b.tu;
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
T minn(mang<T>& p) {
    T min1=p[0];
    for (int i=1;i<p.n;i++)
            if (p[i]<min1)
                min1=p[i];
    return min1;
}
int main() {
    char s;
    mang<int>m;
    m.n=0;
    mang<PhanSo>k;
    k.n=0;
    mang<float>q;
    q.n=0;
    while (cin>>s) {
        if (s=='a') {
            cin>>m[m.n];
            m.n++;
        }
        else if (s=='c') {
            cin>>k[k.n];
            k.n++;
        }
        else if (s=='b') {
            cin>>q[q.n];
            q.n++;
        }
    }
    if (m.n!=0) cout<<minn(m)<<endl;
    else cout<<"khong co\n";
    if (q.n!=0) cout<<minn(q)<<endl;
    else cout<<"khong co\n";
    if (k.n!=0) cout<<minn(k);
    else cout<<"khong co";
}

