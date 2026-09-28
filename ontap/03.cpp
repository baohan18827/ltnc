#include <bits/stdc++.h>
using namespace std;
struct toado {
    double x,y;
};

istream& operator >> (istream& is, toado &a) {
    is>>a.x>>a.y;
    return is;
}
ostream& operator << (ostream& os, toado a) {
    os<<"("<<fixed<<setprecision(2)<<a.x<<", "<<fixed<<setprecision(2)<<a.y<<")";
    return os;
}
toado operator + (toado &a, toado &b) {
    toado c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}
toado operator - (toado &a, toado &b) {
    toado c;
    c.x=a.x-b.x;
    c.y=a.y-b.y;
    return c;
}
int main () {
    toado a,b,c,d;
    cin>>a>>b;
    c=a+b;
    d=a-b;
    cout<<c<<endl<<d;
}
