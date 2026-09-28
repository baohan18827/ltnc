#include <bits/stdc++.h>
using namespace std;
struct SoDao {
    int a;
};
istream& operator >> (istream& is, SoDao& p) {
    is>>p.a;
    return is;
}
ostream& operator << (ostream& os, SoDao p) {
    os<<"[SoDao] "<<p.a;
    return os;
}
int dao (SoDao p) {
    int s=0;
    while (p.a!=0) {
        s=p.a%10+s*10;
        p.a/=10;
    }
    return s;
}
bool operator > (SoDao x, SoDao y){
    return dao(x)>dao(y);
}
int operator + (SoDao x, int y) {
    int kq;
    kq=dao(x)+y;
    return kq;
}
int main () {
    SoDao x,y;
    int kq,kq1;
    cin>>x>>y;
    cout<<x<<endl<<y<<endl;
    if (x>y) cout<<"YES"; else cout<<"NO";
    cout<<endl;
    kq=x+0;
    kq1=y+kq;
    cout<<kq1;
}

