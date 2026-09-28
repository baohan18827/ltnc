#include <bits/stdc++.h>
using namespace std;
struct Dthang {
    int a,b,c;
};
istream& operator >> (istream& is, Dthang& p) {
    is>>p.a>>p.b>>p.c;
    return is;
}
ostream& operator << (ostream& os, Dthang p) {
    if (p.a!=0) {
        if (p.a==1) os<<"x";
        else if (p.a==-1) os<<"-x";
        else os<<p.a<<"x";
    }
    if (p.b!=0) {
        if (p.a!=0) {
            if (p.b>0) os<<"+";
            else os<<"-";
        }
        else if (p.b<0) os<<"-";
        if (p.b==1||p.b==-1) os<<"y";
        else if (p.b>0) os<<p.b<<"y";
        else os<<-p.b<<"y";
    }
    if (p.c!=0) {
        if (p.c>0) os<<"+"<<p.c<<"=0";
        else if (p.c<0) os<<"-"<<-p.c<<"=0";
    }
    else os<<"=0";
    return os;
}
struct PhanSo {
    int tu,mau;
    void rg (){
        int d=__gcd(tu,mau);
        tu=tu/d;
        mau=mau/d;
        if (mau<0) {
            tu=-tu;
            mau=-mau;
        }
    }
};
double kc (Dthang p, Dthang q) {
    double d;
    if (p.b==0) {
        double x0 = -1.0*p.c/p.a;
        d = abs(x0*q.a + q.c)/sqrt(q.a*q.a+q.b*q.b);
    }
    else {
        double y0 = -1.0*p.c/p.b;
        d = abs(y0*q.b + q.c)/sqrt(q.a*q.a+q.b*q.b);
    }
    return roundf(d*1000)/1000;
}
void vttd (Dthang p, Dthang q) {
    int d=p.a*q.b-q.a*p.b;
    int dx=-p.c*q.b+q.c*p.b;
    int dy=-p.a*q.c+q.a*p.c;
    if (d!=0) {
        if (p.a*q.a+p.b*q.b==0) cout<<"V\n";
        else cout<<"C\n";
        if (dx%d==0) cout<<"("<<dx/d<<",";
        else {
            PhanSo m;
            m.tu=dx;
            m.mau=d;
            m.rg();
            cout<<"("<<m.tu<<"/"<<m.mau<<",";
        }
        if (dy%d==0) cout<<dy/d<<")";
            else {
                PhanSo m;
                m.tu=dy;
                m.mau=d;
                m.rg();
                cout<<m.tu<<"/"<<m.mau<<")";
            }
    }
    else if (d==0) {
        if (dy==0&&dx==0) cout<<"T\n0";
        else cout<<"S"<<endl<<kc(p,q);
    }
}
int main () {
    Dthang p,q;
    cin>>p>>q;
    cout<<p<<endl<<q<<endl;
    vttd(p,q);
}

