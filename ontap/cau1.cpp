#include <bits/stdc++.h>
using namespace std;
bool dxung (int x) {
    int dao=0;
    int n=x;
    while (n>0) {
        dao=dao*10+ n%10;
        n/=10;
    }
    return x==dao;
}

int main () {
    ifstream fin ("vector_inp.txt");
    ofstream fout ("vector_out.txt");
    vector<int>dx,kdx;
    int x;
    while (fin>>x) {
        if (dxung(x))
            dx.push_back(x);
        else {
            kdx.push_back(x);
        }
    }
    fout<<*max_element(dx.begin(),dx.end())<<" "<<accumulate(dx.begin(), dx.end(), 0)<<endl;
    sort(dx.begin(),dx.end(),greater<int>());
    for (int i=0;i<dx.size();i++) {
        fout<<dx[i]<<" ";
    }
    fout<<endl;
    fout<<*min_element(kdx.begin(),kdx.end())<<" "<<accumulate(kdx.begin(), kdx.end(), 0)<<endl;
    sort(kdx.begin(),kdx.end());
    for (int i=0;i<kdx.size();i++) {
        fout<<kdx[i]<<" ";
    }
}
