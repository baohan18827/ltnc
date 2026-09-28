#include <bits/stdc++.h>
using namespace std;
struct Diem {
    int x,y;
};
istream& operator >> (istream& is, Diem& a) {
    is>>a.x>>a.y;
    return is;
}
ostream& operator << (ostream& os, Diem a) {
    os<<"("<<a.x<<","<<a.y<<")";
    return os;
}
bool operator == (Diem a, Diem b) {
    return (a.x==b.x&&a.y==b.y);
}
bool operator < (Diem a, Diem b) {
    if (a.x<b.x) return true;
    else if (a.x==b.x) {
        if (a.y<b.y) return true;
        else return false;
    }
    else return false;
}
Diem operator + (Diem a, Diem b) {
    Diem kq;
    kq.x=a.x+b.x;
    kq.y=a.y+b.y;
    return kq;
}
struct dayDiem {
    int n;
    Diem a[100];
    Diem& operator[](int i) {
        return a[i];
    }
};
istream& operator >> (istream& nhap, dayDiem& a){
    a.n=0;
    while (nhap>>a[a.n])
        a.n++;
    return nhap;
}
ostream& operator << (ostream& xuat, dayDiem a) {
    for (int i=0;i<a.n;i++)
        xuat<<a[i];
    return xuat;
}
Diem tong (dayDiem a){
    Diem kq;kq.x=0;kq.y=0;
    for (int i=0;i<a.n;i++)
        kq=kq+a[i];
    return kq;
}
int main () {
    dayDiem a;
    cin>>a;
    Diem max=a[0];
    for (int i=1;i<a.n;i++)
        if (max<a[i]) max=a[i];
    cout<<max<<endl;
    cout<<tong(a);
}
