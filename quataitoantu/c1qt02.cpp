#include <bits/stdc++.h>
using namespace std;
struct SoPhuc {
    int a,b;
};
istream& operator >> (istream& is, SoPhuc& x){
    is>>x.a>>x.b;
    return is;
}
ostream& operator << (ostream& os, SoPhuc x){
    if (x.b>0) os<<x.a<<"+"<<x.b<<"*i";
    else os<<x.a<<"-"<<-x.b<<"*i";
    return os;
}
SoPhuc operator + (SoPhuc x, SoPhuc y) {
    SoPhuc kq;
    kq.a=x.a+y.a;
    kq.b=x.b+y.b;
    return kq;
}
SoPhuc operator - (SoPhuc x, SoPhuc y) {
    SoPhuc kq;
    kq.a=x.a-y.a;
    kq.b=x.b-y.b;
    return kq;
}
SoPhuc operator * (SoPhuc x, SoPhuc y) {
    SoPhuc kq;
    kq.a=x.a*y.a-x.b*y.b;
    kq.b=x.a*y.b+y.a*x.b;
    return kq;
}
bool operator < (SoPhuc x, SoPhuc y) {
    if (x.a<y.a) return true;
    else if (x.a==y.a)
        if (x.b<y.b) return true;
    return false;
}
int main() {
    int n;
    SoPhuc x[100],max,min,tong,tich,hieu;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>x[i];
    max=min=tong=tich=x[0];
    for (int i=1;i<n;i++){
        if (max<x[i]) max=x[i];
        if (x[i]<min) min=x[i];
        tong=tong+x[i];
        tich=tich*x[i];
    }
    hieu=max-min;
    cout<<max<<endl<<tong<<endl<<tich<<endl<<hieu;
}
