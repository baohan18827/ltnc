#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1000];
void kphan (int i) {
    for (int j=1;j<=k;j++) {
        a[i]=j;
        if (i==n) {
            for (int h=1;h<=n;h++) {
                cout<<a[h];
            }
            cout<<endl;
        }
        else {
            kphan(i+1);
        }
    }
}
int main (){
    cin>>k>>n;
    cout<<pow(k,n)<<endl;
    kphan(1);
}
