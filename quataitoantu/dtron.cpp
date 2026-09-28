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
double operator - (Diem a, Diem b) {
    double kq;
    kq=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
    return kq;
}
struct Dtron {
    Diem a;
    int r;
};
istream& operator >> (istream& nhap, Dtron& m) {
    nhap>>m.a>>m.r;
    return nhap;
}
ostream& operator << (ostream& xuat,Dtron m) {
    xuat<<m.a<<" "<<m.r;
    return xuat;
}
bool operator < (Dtron m, Dtron n) {
    return m.r<n.r;
}
bool operator == (Dtron m, Dtron n) {
    return m.r==n.r;
}
double operator + (Dtron m, Dtron n) {
    double kq;
    kq=3.14*m.r*m.r+3.14*n.r*n.r;
    kq=roundf(kq*1000)/1000;
    return kq;
}
void vttd (Dtron m, Dtron n) {
    if (m.a-n.a==0) cout<<"DT";
    else if (abs(m.r-n.r)<(m.a-n.a)&&(m.a-n.a)<(m.r+n.r)) cout<<"C";
    else if (abs(m.r-n.r)==(m.a-n.a)) cout<<"TXT";
    else if ((m.a-n.a)==(m.r+n.r)) cout<<"TXN";
    else if ((m.r+n.r)<(m.a-n.a)) cout<<"NN";
    else if ((m.a-n.a)<abs(m.r-n.r)) cout<<"DN";
}
int main () {
    Dtron m,n;
    cin>>m>>n;
    cout<<m<<endl<<n<<endl;
    double k=m+n;
    cout<<k<<endl;
    if (m==n) cout<<"1 = 2";
    else if (m<n) cout<<"1 < 2";
    else cout<<"1 > 2";
    cout<<endl;
    vttd(m,n);
}

