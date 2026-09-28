#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    getline (cin,s);
    stringstream ss(s);
    string tu,ketqua="";
    while (ss>>tu) {
        tu[0]=toupper(tu[0]);
        for (int i=1;i<tu.size();i++) {
            tu[i]=tolower(tu[i]);
        }
        if (ketqua=="") {
            ketqua=tu;
        }
        else {
            ketqua=ketqua+' '+tu;
        }
    }
    cout<<ketqua;
}
