#include <bits/stdc++.h>
using namespace std;
bool scp(int a);
bool sc(int a);
int main(){
    vector<int> v;
    int x;
    while (cin>>x){
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    v.erase(remove_if(v.begin(), v.end(),scp),v.end());
    for(vector<int>::iterator it=v.begin();it !=v.end();it++){
        if(sc(*it))
            cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
bool scp(int a){
    int i=sqrt(a);
    if(i*i==a) return true;
    else return false;
}
bool sc(int a){
    if(a%2==0) return true;
    else return false;
}
