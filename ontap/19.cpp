#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    stack<int>x;
    while (n>0) {
        x.push(n%2);
        n/=2;
    }
    while (!x.empty()) {
        cout<<x.top();
        x.pop();
    }

}
