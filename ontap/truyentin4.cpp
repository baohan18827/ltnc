#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    cin.ignore();
    string s;
    while(getline(cin,s)) {
        string so="";
        for (int i=0;i<s.size();i++) {
            if (s[i]>='0'&&s[i]<='9') {
                so+=s[i];
            }
            else {
                so+=" ";
            }
        }
        stringstream ss(so);
        int k;
        while(ss>>k) {
            cout<<k<<" ";
        }
        cout<<endl;
    }
}
