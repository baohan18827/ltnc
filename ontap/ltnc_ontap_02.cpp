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
int main () {
    toado a;
    cin>>a;
    cout<<a;
}
