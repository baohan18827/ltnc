#include <bits/stdc++.h>
using namespace std;
double lai (int n) {
    if (n==0) return 1;
    else {
        return lai(n-1)*1.07;
    }
}
int main () {
    int n;
    cin>>n;
    cout<<fixed<<setprecision(2)<<lai(n);
}
