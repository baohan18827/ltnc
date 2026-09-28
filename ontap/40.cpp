#include <bits/stdc++.h>
using namespace std;
bool chu(char c) {
    return ((c>='a'&&c<='z')||(c>='A'&&c<='Z'));
}
int main () {
    string s;
    getline(cin,s);
    int dem=0;
    for (int i=0;i<s.size();i++) {
        if (chu(s[i])&&(i==0||!chu(s[i-1]))) dem++;
    }
    cout<<dem;
}
