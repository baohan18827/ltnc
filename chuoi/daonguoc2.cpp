#include <bits/stdc++.h>
using namespace std;
int dao(int x){
    string c=to_string(x);
    reverse(c.begin(),c.end());
    return stoi(c);
}
int main(){
    vector<int> a;
    int x;
    int check=0;
    int mx=INT_MIN;
    ifstream fi("inDaoNguoc2.txt");
    ofstream fo("outDaoNguoc2.txt");
    while(fi>>x){
        a.push_back(x);
        if(dao(x)>mx){
            mx=dao(x);
        }
    }
    fo<<dao(mx)<<endl;
     for(int i=0;i<a.size();i++){
        if(a[i]==dao(mx)){
            check++;
        }
    }
    if(check==2){
    for(int i=0;i<a.size();i++){
        if(a[i]==dao(mx)){
            fo<<i<<" ";
        }
    }
    }
}
