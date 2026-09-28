#include <bits/stdc++.h>
using namespace std;
struct HCN {
    float d,r;
};
istream& operator >> (istream& is, HCN& a) {
    is>>a.d>>a.r;
    return is;
}
ostream& operator << (ostream& os, HCN a) {
    os<<"[HCN] "<<a.d<<","<<a.r<<endl;
    return os;
}
float chuvi (HCN a) {
    float kq;
    kq=(a.d+a.r)*2;
    return kq;
}
bool operator < (HCN a, HCN b) {
    return chuvi(a)<chuvi(b);
}
float operator + (HCN a, float b) {
    float kq;
    kq=chuvi(a)+b;
    return kq;
}
int main () {
    HCN a,b;
    cin>>a>>b;
    cout<<a<<b;
    if (a<b) cout<<"true";
    else cout<<"false";
}
