#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    getline (cin,s);
    for (char &c:s) {
        if (c>='A'&&c<='Z') c=tolower(c);
        else if (c>='a'&&c<='z') c=toupper(c);
    }
    cout<<s;
}
