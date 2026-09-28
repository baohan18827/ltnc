#include <bits/stdc++.h>
using namespace std;
struct diem {
    int x,y;
};
istream& operator >> (istream& is, diem& a) {
    is>>a.x>>a.y;
    return is;
}
ostream& operator << (ostream& os, diem a) {
    os<<"("<<a.x<<","<<a.y<<")";
    return os;
}
double khoangcach (diem a, diem b){
    int c=b.x-a.x;
    int d=b.y-a.y;
    return sqrt(c*c+d*d);
}
bool operator == (diem a, diem b) {
    if (a.x==b.x&&a.y==b.y) return true;
    return false;
}
struct tamgiac {
    diem a,b,c;
};
istream& operator >> (istream& nhap, tamgiac& k) {
    nhap>>k.a>>k.b>>k.c;
    return nhap;
}
ostream& operator << (ostream& xuat,tamgiac k){
    xuat<<k.a<<k.b<<k.c;
    return xuat;
}
double chuvi (tamgiac k){
    return khoangcach(k.a,k.b)+khoangcach(k.b,k.c)+khoangcach(k.a,k.c);
}
double operator + (tamgiac k, tamgiac l){
    return chuvi(k)+ chuvi(l);
}
bool operator < (tamgiac k, tamgiac l) {
    return (chuvi(k)<chuvi(l));
}
bool operator == (tamgiac k, tamgiac l) {
    if (chuvi(k)==chuvi(l)) return true;
    return false;
}

int main (){
    tamgiac a,b;
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
    if (chuvi(a)<chuvi(b)) cout<<"TRUE";
    else cout<<"FALSE";
    cout<<endl;
    if (a==b) cout<<"TRUE";
    else cout<<"FALSE";
}
