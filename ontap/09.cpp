#include <bits/stdc++.h>
using namespace std;
bool cp (int a) {
    int n=sqrt(a);
    if (n*n==a) return true;
    return false;
}
int main () {
    ifstream fin ("input.txt");
    int a[100];
    int n=0;
    while (fin>>a[n])
        n++;
    for (int i=0;i<n;i++)
        if (cp(a[i])) cout<<a[i]<<" ";
}
