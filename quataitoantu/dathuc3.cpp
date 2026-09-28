#include <bits/stdc++.h>
using namespace std;
struct BacHai {
    int a,b,c;
};
istream& operator >> (istream& is, BacHai& f ) {
    is>>f.a>>f.b>>f.c;
    return is;
}
ostream& operator << (ostream& os, BacHai f) {
    os<<f.a<<"x^2+"<<f.b<<"x+"<<f.c;
    return os;
}
int tinhGiaTri (BacHai f, int x) {
    return f.a*x*x+f.b*x+f.c;
}
BacHai operator + (BacHai f, BacHai g) {
    BacHai kq;
    kq.a=f.a+g.a;
    kq.b=f.b+g.b;
    kq.c=f.c+g.c;
    return kq;
}
bool operator == (BacHai f, BacHai g){
    return (f.a==g.a&&f.b==g.b&&f.c==g.c);
}
struct BacNhat {
    int e,d;
};
istream& operator >> (istream& is, BacNhat& f) {
    is>>f.d>>f.e;
    return is;
}
ostream& operator << (ostream& os, BacNhat f) {
    os<<f.d<<"x+"<<f.e;
    return os;
}
BacHai operator * (BacNhat f,BacNhat g) {
        BacHai kq;
        kq.a=f.d*g.d;
        kq.b=f.d*g.e+g.d*f.e;
        kq.c=f.e*g.e;
        return kq;
}
int giatri (int& x,BacNhat& f) {
    return x*f.d+f.e;
}
int main(){
    BacHai f1,f2,f5,f6;
    BacNhat f3,f4;
    int x;
    cin>>f1>>f2>>f3>>f4>>x;
    cout<<f1<<endl<<tinhGiaTri(f1,x)<<endl;
    cout<<f2<<endl<<tinhGiaTri(f2,x)<<endl;
    f5=f1+f2;
    cout<<f5<<endl<<tinhGiaTri(f5,x)<<endl;
    f6=f3*f4;
    cout<<"("<<f3<<")*("<<f4<<")="<<f6<<endl<<tinhGiaTri(f6,x)<<endl;
    if (f1==f6&&f6==f2) cout<<"TRUE3";
    else if (f1==f6) cout<<"TRUE1";
    else if (f2==f6) cout<<"TRUE2";
    else cout<<"FALSE";
}
