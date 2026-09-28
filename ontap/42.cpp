#include <bits/stdc++.h>
using namespace std;
bool chu(char c) {
    return (c>='0'&&c<='9');
}
int main () {
    string s;
    getline (cin,s);
    long long tong=0;
    long long so=0;
    for (int i=0;i<s.size();i++) {
        if (chu(s[i])) {
            so=so*10+(s[i]-'0');
        }
        else {
            tong+=so;
            so=0;
        }
    }
    tong+=so;
    cout<<tong;
}


c2:
    #include <bits/stdc++.h>
using namespace std;
bool chu(char c) {
    return (c>='0'&&c<='9');
}
int main () {
    string s;
    getline (cin,s);
    long long tong=0;
    long long so=0;
    for (int i=0;i<s.size();i++) {
        if (!chu(s[i])) {
            s[i]=' ';
        }
    }
    stringstream ss(s);
    while (ss>>so) {
        tong+=so;
    }
    cout<<tong;
}
