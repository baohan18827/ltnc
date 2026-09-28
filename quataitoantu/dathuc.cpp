#include <bits/stdc++.h>
using namespace std;
struct BacNhat {
    int a,b;
};
istream& operator >> (istream& is, BacNhat& f) {
    is>>f.a>>f.b;
    return is;
}
ostream& operator << (ostream& os, BacNhat f) {
    os<<f.a<<"x+"<<f.b;
    return os;
}
int giatri (int& x,BacNhat& f) {
    return x*f.a+f.b;
}
BacNhat operator + (BacNhat f1, BacNhat f2) {
    BacNhat kq;
    kq.a=f1.a+f2.a;
    kq.b=f1.b+f2.b;
    return kq;
}
bool operator == (BacNhat f1, BacNhat f2){
    if (f1.a+f1.b==f2.a+f2.b) return true;
    return false;
}
int main() {
    BacNhat f1,f2,f3;
    int x;
    cin>>f1>>f2;
    cin>>x;
    cout<<f1<<endl<<f2<<endl;
    f3=f1+f2;
    cout<<f1<<"+"<<f2<<"="<<f3<<endl;
    cout<<giatri(x,f1)<<endl<<giatri(x,f2)<<endl;
    if (f1==f2) cout<<"TRUE";
    else cout<<"FALSE";
}
