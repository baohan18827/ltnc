#include <bits/stdc++.h>
using namespace std;
double gt (int x){
    if (x==1) return 1;
    else return x*gt(x-1);
}
int n;
int a[1000];
bool used[1000];
void hoanvi (int i) {
    for (int j=1;j<=n;j++) {
        if (used[j]==false) {
            a[i]=j;
            used[j]=true;
            if (i==n) {
                for (int k=1;k<=n;k++) {
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
    cin>>n;
    cout<<gt(n)<<endl;
    hoanvi(1);
}
