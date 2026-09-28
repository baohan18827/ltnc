#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    //2 1 3 4 5 6 7 8 9 9
    vector<int> v;
    int x;
    while (cin>>x){
        v.push_back(x);
    }
    for (vector<int>::size_type i=0;i<v.size();++i)
        cout<<v[i]<<" ";

    cout<<endl;
    for (vector<int>::iterator it=v.begin();it !=v.end();it++)
        cout<<*it<<" ";
    for(vector<int>::reverse_iterator rit=v.rbegin(); rit!=v.rend(); rit++)
        cout<<*rit<<" ";
    return 0;
}
