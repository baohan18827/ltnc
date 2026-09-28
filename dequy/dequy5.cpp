#include <bits/stdc++.h>
using namespace std;
double gt (int x){
    if (x==1) return 1;
    else return x*gt(x-1);
}
double tong (int x, int n) {
    if (n==0) return x+1;
    else return pow(x,2*n+1)/gt(2*n+1) + tong(x,n-1);
}
int main () {
    int x,n;
    cin>>n>>x;
    cout<<roundf(tong(x,n)*1000)/1000;
}
