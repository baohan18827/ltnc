#include <bits/stdc++.h>
using namespace std;
int n;
int x[100];
bool used[1000];

void Try (int k) {
    for (int i=1;i<=n;i++) {
        if (!used[i]) {
            used[i]=true;
            x[k]=i;
            if (k==n) {
                for (int j=1;j<=n;j++) {
                    cout<<x[j]<<" ";
                }
            cout<<endl;
            }
            else Try(k+1);
            used[i]=false;
        }
    }
}
int main () {
    cin>>n;
    Try(1);
}
