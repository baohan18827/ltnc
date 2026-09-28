#include <bits/stdc++.h>
using namespace std;
int main () {
    string c;
    cin>>c;
    stack<char>x;
    for (char s:c) {
        if (s=='(') {
            x.push(s);
        }
        else if (s==')'&&!x.empty()&&x.top()=='(') {
            x.pop();
        }
        else {
            cout<<"NO";
            return 0;
        }
    }
    if (x.empty()) cout<<"YES";
    else cout<<"NO";
}
