#include <bits/stdc++.h>
using namespace std;

struct mang {
    int n,a[10];
    int& operator[](int i) {
        return a[i];
    }
};

istream& operator >> (istream &is, mang& x){
    for (int i=0;i<x.n;i++)
        is>>x[i];
    return is;
}
ostream& operator << (ostream &os, mang x) {
    for (int i=0;i<x.n;i++)
        os<<x[i]<<" ";
    return os;
}
int operator + (mang m1, mang m2) {
    int t1=0,t2=0;
    for (int i=0;i<m1.n;i++)
        t1+=m1[i];
    for (int i=0;i<m2.n;i++)
        t2+=m2[i];
    return t1+t2;
}
bool operator == (mang m1, mang m2) {
    if (m1.n!=m2.n) return false;
    else
        for (int i=0;i<m1.n;i++)
                if (m1[i]!=m2[i]) return false;
    return true;
}
bool operator != (mang m1, mang m2) {
    if (m1.n!=m2.n) return true;
    else
        for (int i=0;i<m1.n;i++)
                if (m1[i]!=m2[i]) return true;
    return false;
}
int main () {
    mang m1,m2;
    cin>>m1.n;
    cin>>m1;
    cin>>m2.n;
    cin>>m2;
    if (m1==m2) cout<<"yes";
    else cout<<"no";
}

