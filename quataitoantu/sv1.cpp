#include <bits/stdc++.h>
using namespace std;
struct SV {
    string hoten;
    int a,b,c;
};
istream& operator >> (istream& is, SV& sv1 ) {
    getline(is >> ws, sv1.hoten);
    is>>sv1.a>>sv1.b>>sv1.c;
    return is;
}
ostream& operator << (ostream& os, SV sv1) {
    os<<sv1.hoten;
    return os;
}
double dtb (SV sv1) {
    return (sv1.a+sv1.b+sv1.c)/3.0;
}
bool operator < (SV sv1, SV sv2) {
    return dtb(sv1)<dtb(sv2);
}
int main () {
    SV sv1,max;
    max.a=max.b=max.c=-1;max.hoten="";
    while (cin>>sv1) {
        if (max<sv1) {
            max=sv1;
        }
    }
    cout<<max;
}
