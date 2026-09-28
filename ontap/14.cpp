#include <bits/stdc++.h>
using namespace std;
int tong (int n) {
    if (n<10) {
        return n;
    } else {
        return tong(n/10)+ n%10;
    }
}
int main () {
    int n;
    cin>>n;
    cout<<tong(n);
}
