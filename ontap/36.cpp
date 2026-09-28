#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    getline(cin,s);
    int dem[1000]={0};
    for (int i=0;i<s.size();i++) {
        dem[s[i]]++;
    }
    int mx=0;
    char chu=' ';
    for (int i=0;i<s.size();i++) {
        if (dem[s[i]]>mx) {
            mx=dem[s[i]];
            chu=s[i];
        }
    }
    for (int i=0;i<s.size();i++) {
        if (dem[s[i]]==mx) {
            if (int(s[i])<int(chu)) {
                chu=s[i];
            }
        }
    }
    cout<<chu<<" "<<mx;


}
