#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
    int tu,mau;
};
istream& operator >> (istream&is, PhanSo& a){
    is>>a.tu>>a.mau;
    return is;
}
ostream& operator << (ostream& os, PhanSo a){
    os<<a.tu<<"/"<<a.mau;
    return os;
}
bool operator < (PhanSo a, PhanSo b) {
    return (a.tu*b.mau<a.mau*b.tu);
}
template <typename T>
void sosanh (T&a, T&b, T&c) {
    T max=a;
    if (max<b) max=b;
    if (max<c) max=c;
    cout<<max;
}
int main () {
    char x;
    cin>>x;
    if (x=='a') {
        int a,b,c;
        cin>>a>>b>>c;
        sosanh(a,b,c);
    }
    else if (x=='b') {
        double a,b,c;
        cin>>a>>b>>c;
        sosanh(a,b,c);
    }
    else if (x=='c') {
        PhanSo a,b,c;
        cin>>a>>b>>c;
        sosanh(a,b,c);
    }
}

