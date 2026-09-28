#include <bits/stdc++.h>
using namespace std;
int main () {
    ifstream fin ("FSTREAM.inp");
    ofstream fout ("FSTREAM.out");
    int n,x;
    fin >> n;
        x=sqrt(n);
    if (x*x==n) fout <<"YES";
    else fout<<"NO";
}


