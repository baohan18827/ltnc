#include <bits/stdc++.h>
using namespace std;

double dientich (double a) {
    return a*a*3.14;
}
double dientich (double a, double b) {
    return a*b;
}
int main () {
    double a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(2)<<dientich(a);
    cout<<endl;
    cout<<fixed<<setprecision(2)<<dientich(b,c);
}
