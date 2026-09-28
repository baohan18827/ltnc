#include <iostream>
using namespace std;
int s(int a) {
    if (a<10) {
        return a;
    }
    else {
        return a%10 + s(a/10);
    }
}
int main () {
    int a;
    cin>>a;
    cout<<s(a) ;
}
