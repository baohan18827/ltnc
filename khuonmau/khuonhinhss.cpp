#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
    int tu,mau;
};
istream& operator >> (istream&is, PhanSo& a){
    is>>a.tu>>a.mau;
    return is;
}
bool operator == (PhanSo a, PhanSo b) {
    return (a.tu*b.mau==a.mau*b.tu);
}
template <typename T>
bool bang(T& a, T& b) {
    return (a==b);
}
int main () {
    char s;
    cin>>s;
    if (s=='a') {
        int a,b;
        cin>>a>>b;
        if (bang(a,b)) cout<<"true";
        else cout<<"false";
    }
    if (s=='b') {
        double a,b;
        cin>>a>>b;
        if (bang(a,b)) cout<<"true";
        else cout<<"false";
    }
    if (s=='c') {
        PhanSo a,b;
        cin>>a>>b;
        if (bang(a,b)) cout<<"true";
        else cout<<"false";
    }
}
