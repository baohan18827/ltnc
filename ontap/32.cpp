#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    getline(cin,s);
    string t="";
    for (char c:s) {
        if (c!=' ') {
            t+=tolower(c);
        }
    }
    string dao=t;
    reverse(dao.begin(),dao.end());
    if (dao==t) cout<<"YES";
    else cout<<"NO";

}
