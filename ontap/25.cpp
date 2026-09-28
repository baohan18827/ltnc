#include <bits/stdc++.h>
using namespace std;
bool mx (int a, int b) {
    return abs(a)>abs(b);
}
int main () {
    vector<long long>a;
    int x;
    while (cin>>x) {
        a.push_back(x);
    }
    sort(a.begin(),a.end(),mx);
    for (int i=0;i<a.size();i++) {
        cout<<a[i]<<" ";
    }
}
