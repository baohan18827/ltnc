
#include <iostream>
#include <string>
using namespace std;
bool palim ( string s, int i, int j ) {
    while ( i < j ) {
        if ( s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main () {
    string s;
    cin >> s;
    int n = s.size();
    int dem = 0;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = i; j < n; j++ ) {
            if (palim(s,i,j)) {
                dem ++;
            }
        }
    }
    cout << dem;
    return 0;
}
