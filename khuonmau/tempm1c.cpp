#include <bits/stdc++.h>
using namespace std;
template <typename T>
struct M1C {
    int n;
    T a[100];
    T& operator [] (int i) {
        return a[i];
    }
};
template <typename T>
void nhap(M1C<T>& p) {
    p.n=0;
    while (cin>>p[p.n])
        p.n++;
}
template <typename T>
void xuat(M1C<T> p) {
    for (int i=0;i<p.n;i++)
        cout<<p[i];
}
template <typename T>
int tong(M1C<T> p) {
    int s=0;
    for (int i=0;i<p.n;i++)
        s+=p[i];
    return s;
}
int main() {
    M1C<int>p;
    nhap(p);
    cout<<tong(p);
}
