#include <bits/stdc++.h>
using namespace std;
long long gt (int x, int n) {
    if (n==0) return 1;
    else return x*gt(x,n-1);
}
long long tong (int x, int n) {
    if (n==0) return 1;
    else return tong(x,n-1) +gt(x,n);
}
int main () {
    int x,n;
    cin>>x>>n;
    cout<<tong(x,n);
}
