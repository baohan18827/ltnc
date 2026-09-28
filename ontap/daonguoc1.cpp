#include <bits/stdc++.h>
using namespace std;
int dao(int x) {
    string c=to_string(x);
    reverse(c.begin(),c.end());
    return stoi(c);
}
int main () {
    int n=0,mx=-9999;
    while (cin>>n) {
        if (mx<dao(n)) {
            mx=dao(n);
        }
    }
    cout<<dao(mx);

}
