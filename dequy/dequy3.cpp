#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[1000];
bool used[1000];
void hoanvi (int i) {
    for (int j=1;j<=n;j++) {
        if (used[j]==false) {
            a[i]=j;
            used[j]=true;
            if (i==m) {
                for (int k=1;k<=m;k++) {
                    cout<<a[k];
                }
                cout<<endl;
            }
            else {
                hoanvi(i+1);
            }
            used[j]=false;
        }
    }
}
int main (){
    cin>>m>>n;
    hoanvi(1);
}
