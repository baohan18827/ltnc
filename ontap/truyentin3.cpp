#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++) {
        string s;
        cin>>s;
        string kq="";
        kq=s[0];
        for (int j=1;j<s.size();j++) {
            if (s[j]>='A'&&s[j]<='Z') {
                kq+=" ";
            }
            kq+=s[j];
        }
        cout<<kq<<endl;
    }
}
