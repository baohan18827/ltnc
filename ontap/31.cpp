#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin>>s;
    int i=0;
    for (char c:s) {
        if (c=='_') {
            s[i]=' ';
        }
        i++;
    }
    cout<<s;
}
