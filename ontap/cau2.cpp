#include <bits/stdc++.h>
using namespace std;
string inhoa (string s) {
    transform(s.begin(),s.end(),s.begin(),::toupper);
    return s;
}
int main () {
    ifstream fin ("upcoder.inp");
    ofstream fout ("upcoder.out");
    string chuoi;
    map<string,int> dem;
    while (getline(fin,chuoi)) {
        stringstream ss(chuoi);
        string hoten,truong,mssv,mk;
        getline(ss,hoten, ';');
        getline(ss,mssv, ';');
        getline(ss,truong, ';');
        getline(ss,mk, ';');
        truong=inhoa(truong);
        dem[truong]++;
    }
    for (auto x:dem)
        fout<<x.first<<":"<<x.second<<endl;
}
