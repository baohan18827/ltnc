#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    int dem=0;
    getline (cin,s);
    for (char c:s) {
        c=tolower(c);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
            dem++;
        }
    }
    cout<<dem;
}
