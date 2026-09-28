#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> a;
    int x;
    cin>>x;
    if (x==0) {
        cout<<0;
        return 0;
    }
    while(x!=0){
        a.push(x % 2);
        x/=2;
    }
    while(!a.empty()){
        cout<<a.top();
        a.pop();
    }
}
