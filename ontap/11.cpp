#include <bits/stdc++.h>
using namespace std;
int tonguoc (int x) {
    int s=0;
    for (int i=1;i<=x;i++) {
        if (x%i==0) s+=i;
    }
    return s;
}
int main () {
    vector<int>a;
    int x;
    ifstream fi ("input.txt");
    ofstream fo ("output.txt");
    while (fi>>x) {
        a.push_back(x);
    }
    int mx=0;
    for (int i=0;i<a.size();i++) {
        if (tonguoc(mx)<tonguoc(a[i])){
            mx=a[i];
        }
    }
    fo<<mx;
}
