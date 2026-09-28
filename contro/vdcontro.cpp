#include <bits./stdc++.h>
using namespace std;
int main(){
    int * p= new int ;
    int * p;
    q = new int;
    * q = 1;
    p = q;
    cout << *p << endl << *q << endl;
    *p = 2;
    cout << * p << endl << * q << endl;
    int * t = new int;
    * t = 3; p = t;
    cout << * t<< endl<< *p <<endl << * q << endl;
    * q = 1;
    * p= *q;
    cout << t << endl << p << endl << *q;
    delete p, q;
    return 0;
}
