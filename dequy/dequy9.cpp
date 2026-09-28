#include <bits/stdc++.h>
using namespace std;
long long int sn(int n) {
    if (n==1) {
        return 1;
    }
    else return n+sn(n-1);
}
long long int pn(int n) {
    if (n==1){
        return 1;
    }
    else return n*pn(n-1);
}
int main () {
    long long int n,s=0,p=0;
    cin>>n;
    for (int i=1;i<=n;i++) {
        s+=sn(i);
    }
    for (int i=1;i<=n;i++) {
        p+=pn(i);
    }
    cout<<"S("<<n<<") = "<<s<<endl;
    cout<<"P("<<n<<") = "<<p;
}
