#include <bits/stdc++.h>
using namespace std;
struct DaThuc {
    int n,a[100];
    int& operator [] (int i) {
        return a[i];
    }
};
istream& operator >> (istream& is, DaThuc& f) {
    is>>f.n;
    for (int i=0;i<=f.n;i++) {
        is>>f[i];
    }
    return is;
}
ostream& operator << (ostream& os, DaThuc f) {
    int dem=0;
    for (int i=0;i<=f.n;i++) {
        if (f[i]!=0) {
            if (i!=0||f[i]<0) {
                if (f[i]<0) os<<"-";
                else os<<"+";
            }
            if (abs(f[i])!=1||(f.n-i)==0) os<<abs(f[i]) ;
            if ((f.n-i)!=0) {
                os<<"x";
                if ((f.n-i)!=1) os<<"^"<<f.n-i;
            }
        }
        if (f[i]==0) dem++;
    }
    if (dem==f.n+1) os<<"0";
    return os;
}
DaThuc DaoHam (DaThuc f) {
    DaThuc dh;
    if(f.n == 0){
        dh.n = 0;
        dh[0] = 0;
    }
    else {
        dh.n = f.n - 1;
        int i = 0, k = f.n;
        while(i < f.n){
            dh[i] = f[i]*k;
            k--;
            i++;
        }
    }
    return dh;
}
int main () {
    DaThuc f;
    cin>>f;
    cout<<f<<endl;
    cout<<DaoHam(f)<<endl;
    cout<<DaoHam(DaoHam(f));
}
