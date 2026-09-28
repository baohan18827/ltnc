#include <bits/stdc++.h>
using namespace std;

int tong (int n) {
    int s=0;
    if (n==0) return 0;
    else if (n==1) return 1;
    else if (n%2==0) return (tong(n/2));
    else return (tong(n/2)+tong(n/2+1));
}
int main () {
    int n,mx=0;
    cin>>n;
    for (int i=1;i<=n;i++) {
        if (tong(i)>mx) mx=tong(i);
    }
    cout<<mx;
}
