#include <bits/stdc++.h>
using namespace std;
int tong (int n,int x) {
    if (n==0)
        return 1;
    return tong(n-1,x) +pow(x,n);
}
int main () {
    int n,x;
    cin>>n>>x;
    cout<<tong(n,x);
}
