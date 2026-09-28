#include <bits/stdc++.h>
using namespace std;
bool cp(int x) {
    int n=sqrt(x);
    return (n*n==x);
}
int main () {
    vector<int>a;
    int x,dem=0;
    while (cin>>x) {
        a.push_back(x);
        if (cp(x)) dem++;
    }
    cout<<dem;
}
