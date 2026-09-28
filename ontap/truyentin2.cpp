#include <bits/stdc++.h>
using namespace std;
int chuyendoi(string s){
    int kq=0;
    for(char c:s){
        kq=kq*2+c-'0';
    }
    return kq;
}
int main (){
    int n;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++){
        string s;
        cin>>s;
        stringstream ss(s);
        string c;
        vector<int>v;
        while(getline(ss,c,'.')){
            v.push_back(chuyendoi(c));
        }
         for(int i=0;i<4;i++){
            cout<<v[i];
            if(i!=3){
                cout << ".";
            }
        }
        cout << endl;
    }
}
