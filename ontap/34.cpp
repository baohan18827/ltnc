#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    getline (cin,s);
    for (int i=1;i<s.size();i++) {
        if (s[i]==s[i-1]) {
            s.erase(i,1);
            i--;
        }
    }
    cout<<s;
}
