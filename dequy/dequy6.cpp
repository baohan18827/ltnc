#include <bits/stdc++.h>
using namespace std;
double gt (int x) {
    if (x==1) return 1;
    else return x*gt(x-1);
}
double tong(int n, int x) {
    if (n==0) return x;
    else return (pow(-1,n)*(pow(x,2*n+1)/gt(2*n+1)))+tong(n-1,x);
}
int main() {
    int n,x;
    cin>>n>>x;
    cout<<roundf(tong(n,x)*1000)/1000;
}
