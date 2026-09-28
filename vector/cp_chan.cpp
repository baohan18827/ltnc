#include <bits/stdc++.h>
using namespace std;

bool soChinhPhuong(int n){
    if(n < 0) return false;
    int x = sqrt(n);
    return x * x == n;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < a.size(); i++)
    cin >> a[i];
    for(int i = 0; i < a.size(); ) {
        if(soChinhPhuong(a[i]) || a[i] % 2 == 0)
            a.erase(a.begin() + i);
        else
            i++;
    }
    for(int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
}
