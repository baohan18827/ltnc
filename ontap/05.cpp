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

toado operator ++ (toado &a, int i) {
    toado kq;
    kq.x=a.x+1;
    kq.y=a.y+1;
    return kq;
}
toado operator -- (toado &a, int i) {
    toado kq;
    kq.x=a.x-1;
    kq.y=a.y-1;
    return kq;
}

int main () {
    toado a,b,c;
    cin>>a;
    b=a++;
    c=a--;
    cout<<b<<endl<<c;

}
