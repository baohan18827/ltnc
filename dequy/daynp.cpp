#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000];
void nhiphan (int i) {
    for (int j=0;j<=1;j++) {
        a[i]=j;
        if (i==n) {
            for (int k=1;k<=n;k++) {
                cout<<a[k];
            }
            cout<<endl;
        }
        else {
            nhiphan(i+1);
        }
    }
}
int main () {
    cin>>n;
    nhiphan(1);
}
