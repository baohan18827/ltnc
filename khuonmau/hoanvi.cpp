#include <iostream>
using namespace std;
template <typename T>
void hoanvi(T& a, T& b);

int main() {
    int a=1,b=2;
    hoanvi<int>(a,b);
    cout<<a<<" "<<b<<endl;
    float t = 1.2, s = 3.4;
	hoanvi<float>(t, s);
	cout << t << " " << s << endl;
    return 0;
}
template <typename T>
void hoanvi (T& a, T& b) {
    T tmp=a;
    a=b;
    b=tmp;
}
