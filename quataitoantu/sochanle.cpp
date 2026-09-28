#include <bits/stdc++.h>
using namespace std;
struct so {
    int n,a[100];
    int& operator [](int i) {
        return a[i];
    }
};
istream& operator >> (istream& is, so& s) {
    int x;
    is>>x;
    s.n=0;
    int nguoc[100];
    while (x!=0) {
        nguoc[s.n]=x%10;
        x/=10;
        s.n++;
    }
    for (int i=0;i<s.n;i++)
        s[i]=nguoc[s.n-i-1];
    return is;
}
ostream& operator << (ostream& os, so s) {
   for (int i=0;i<s.n;i++)
        if (i%2==0) os<<s[i];
   return os;
}
bool operator < (so x, so y) {
    int xm=0,ym=0;
    for (int i=0;i<x.n;i++)
        if (i%2==0) xm=xm*10+x[i];
    for (int i=0;i<y.n;i++)
        if (i%2==0) ym=ym*10+y[i];
    return xm<ym;
}
int tongThanhPhan (so a,int b=0) {
    int kq=0;
    for (int i=0;i<a.n;i++)
        if (i%2==b) kq+=a[i];
    return kq;
}
int main() {
    so a,b;
    cin>>a>>b;
    char s;
    cin>>s;
    cout<<a<<endl<<b<<endl;
    if (a<b) cout<<"true";
    else cout<<"false";
    cout<<endl;
    if (s=='0') {
            cout<<tongThanhPhan(a,0)<<endl<<tongThanhPhan(b,0);
    }
    else {
            cout<<tongThanhPhan(a,1)<<endl<<tongThanhPhan(b,1);
    }
}
