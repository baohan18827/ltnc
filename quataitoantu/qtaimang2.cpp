#include <bits/stdc++.h>
using namespace std;
struct mang {
    int n,a[100];
    int& operator[](int i){
        return a[i];
    }
};
istream& operator >> (istream& is, mang& x ) {
    for (int i=0;i<x.n;i++)
        is>>x[i];
    return is;
}
ostream& operator << (ostream& os, mang x) {
    for (int i=0;i<x.n;i++)
        os<<x[i]<<" ";
    return os;
}
mang operator + (mang m1, mang m2) {
    mang kq;
    kq.n=max(m1.n,m2.n);
    for (int i=0;i<kq.n;i++) {
        if (i<min(m1.n,m2.n))
            kq[i]=m1[i]+m2[i];
        else {
            if (m1.n==min(m1.n,m2.n)) kq[i]=m2[i];
            else kq[i]=m1[i];
        }
    }
    return kq;
}
int main (){
    mang m1,m2,m3;
    cin>>m1.n;
    cin>>m1;
    cin>>m2.n;
    cin>>m2;
    m3=m1+m2;
    cout<<m3;
}
