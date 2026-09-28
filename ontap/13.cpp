#include <bits/stdc++.h>
using namespace std;
int virus (int n) {
    if (n==0) return 1;
    else {
        return virus(n-1)*2;
    }
}
int main () {
    int n;
    cin>>n;
    cout<<virus(n);
}
