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

bool operator < (toado a, toado b) {
    if (a.x<b.x) return true;
    else {
        if (a.x==b.x)
            if (b.x<b.y) return true;
    }
    return false;
}
bool operator == (toado a, toado b) {
    return (a.x==b.x&&a.y==b.y);
}
int main () {
    toado a,b;
    cin>>a>>b;
    if (a==b) cout<<"trung nhau";
    else if (a<b) cout<<"nho hon";
    else cout<<"lon hon";
}
