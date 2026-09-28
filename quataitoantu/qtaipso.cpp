#include <bits/stdc++.h>
using namespace std;
struct PS
{
    int t, m;
    void rutgon ()
    {
        int ucln = __gcd(t, m);
        t /= ucln;
        m /= ucln;
        if (m < 0)
        {
            t = -t; m = -m;
        }
    }

};
istream& operator >> (istream& is, PS &a)
{
    is >> a.t >> a.m;
    return is;
}
ostream& operator << (ostream& os, PS a)
{
    os << a.t << "/" << a.m;
    return os;
}
PS operator + (PS a, PS b)
{
    PS kq;
    kq.t = a.t*b.m +a.m*b.t;
    kq.m = a.m*b.m;
    kq.rutgon();
    return kq;
}
bool operator == (PS a, PS b)
{
    if (a.t*b.m == a.m*b.t)
    {
        return true;
    }else
    {
        return false;
    }
}
bool operator != (PS a, PS b)
{
    if (a.t*b.m != a.m*b.t)
    {
        return true;
    }else
    {
        return false;
    }
}
int main (){
    PS p1, p2, tong;
    cin >> p1 >> p2;
    tong = p1 + p2;
    cout << tong << endl;
    return 0;
}
