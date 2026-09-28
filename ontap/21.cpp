#include <bits/stdc++.h>
using namespace std;
int main () {
    queue<int>x;
    int n,k,a;
    cin>>n>>k;
    for (int i=0;i<n;i++) {
        cin>>a;
        x.push(a);
    }
    for (int i=0;i<k;i++) {
        x.push(x.front());
        x.pop();
    }
    while (!x.empty()) {
        cout<<x.front()<<" ";
        x.pop();
    }
}
