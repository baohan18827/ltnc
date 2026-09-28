#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct mang {
    int n;
    T a[100];
    T& operator [] (int i) {
        return a[i];
    }
};
template <typename T>
istream& operator >> (istream& is, mang<T> &a) {
    a.n=0;
    while (is>>a[a.n])
        a.n++;
    return is;
}
template <typename T>
T tong ( mang<T> &a) {
    T s=0;
    for (int i=0;i<a.n;i++) {
        s+=a[i];
    }
    return s;
}
int main () {
    char c;
    cin>>c;
    if (c=='a') {
        mang<int>p;
        cin>>p;
        cout<<tong(p);
    }
    else if (c=='b') {
        mang<double>p;
        cin>>p;
        cout<<fixed<<setprecision(2)<<tong(p);
    }
}
