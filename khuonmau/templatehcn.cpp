#include <bits/stdc++.h>
using namespace std;
template <typename T>
struct mang {
    int n;
    T a[1001];
    T& operator [] (int i) {
        return a[i];
    }
};
struct hcn {
    double d,r;
};
istream& operator >> (istream& is, hcn& a){
    is>>a.d>>a.r;
    return is;
}
ostream& operator << (ostream& os, hcn a){
    os<<"[HCN] "<<a.d<<","<<a.r;
    return os;
}
double cv (hcn& a) {
    return 2.0*(a.d+a.r);
}
int main (){
    char s;
    cin>>s;
    if (s=='N'){
        mang<int>p;
         p.n=1;
         cin>>p[0];
         int minn=p[0];        int t=p[0];
        while (cin>>p[p.n]) {
            t+=p[p.n];
            if (p[p.n]<minn)
                minn=p[p.n];
            p.n++;
        }
        cout<<minn<<endl<<t;
    }
    else if (s=='H') {
        mang<hcn>p;
         p.n=1;
        cin>>p[0];
        double t=cv(p[0]);
        hcn minn=p[0];
        while (cin>>p[p.n]) {
            t=t+cv(p[p.n]);
            if (cv(p[p.n])<cv(minn))
                minn=p[p.n];
            p.n++;
        }
        cout<<minn<<endl<<fixed<<setprecision(1)<<t;
    }
}
