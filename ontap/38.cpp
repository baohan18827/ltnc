#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin>>s;
    int dem[1000]={0};
    bool check=false;
    for (int i=0;i<s.size();i++) {
        dem[s[i]]++;
    }
    for (int i=0;i<s.size();i++) {
        if (dem[s[i]]==1) {
            cout<<s[i];
            check=true;
            break;
        }
    }
    if (check==false) cout<<"None";
}
