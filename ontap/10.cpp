#include <bits/stdc++.h>
using namespace std;
bool snt (int x) {
    if (x<2) return false;
    else {
        for (int i=2;i<=sqrt(x);i++) {
            if (x%i==0) return false;
        }
    }
    return true;
}
int main () {
    int x;
    ofstream fout ("output.txt");
    while (cin>>x) {
        if (snt(x)) fout<<x<<" ";
    }
}
