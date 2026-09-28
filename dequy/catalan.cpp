#include <iostream>
using namespace std;
int C(int a) {
    int kq=0;
    if(a == 0 || a == 1) {
        return 1;
    }
    else {
        for(int i = 0; i < a; i++) {
            kq = kq + C(i)*C(a - 1 - i);
        }
    }
    return kq;
}
int main() {
    int a[100];
    int n = 0;
    while(cin >> a[n]){
        cout << C(a[n]) << endl;
        n++;
    }
    return 0;
}
