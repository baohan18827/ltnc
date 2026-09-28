#include <bits/stdc++.h>
using namespace std;
struct toado {
    double x,y;
    toado operator = (toado other) {
        x=other.x;
        y=other.y;
        return *this;
    }
};

istream& operator >> (istream& is, toado &a) {
    is>>a.x>>a.y;
    return is;
}
ostream& operator << (ostream& os, toado a) {
    os<<"("<<fixed<<setprecision(2)<<a.x<<", "<<fixed<<setprecision(2)<<a.y<<")";
    return os;
}
struct mang {
    int n;
    toado a[100];
    toado& operator [] (int i) {
        return a[i];
    }
};
toado operator + (toado &a, toado &b) {
    toado kq;
    kq.x=a.x+b.x;
    kq.y=a.y+b.y;
    return kq;
}
bool operator < (toado a, toado b) {
    if (a.x<b.x) return true;
    else {
        if (a.x==b.x)
            if (b.x<b.y) return true;
    }
    return false;
}

int main () {
    mang a;
    toado s,mx;
    s.x=0;s.y=0;
    cin>>a.n;
    for (int i=0;i<a.n;i++) {
        cin>>a[i];
        s=s+a[i];
    }
    mx.x=0;mx.y=0;
    for (int i=0;i<a.n;i++) {
        if (mx<a[i]) mx=a[i];
    }
    cout<<mx<<endl<<s;
}
