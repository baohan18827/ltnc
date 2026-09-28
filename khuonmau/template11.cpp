#include <bits/stdc++.h>
using namespace std;
struct Diem2 {
    int x2,y2;
};
istream& operator >> (istream& is, Diem2& a) {
    is>>a.x2>>a.y2;
    return is;
}
ostream& operator << (ostream& os, Diem2 a) {
    os<<"("<<a.x2<<","<<a.y2<<")";
    return os;
}
double operator - (Diem2& a, Diem2& b) {
    double kq;
    kq=sqrt(pow((b.x2-a.x2),2)+pow((b.y2-a.y2),2))
    return kq;
}
bool operator < (Diem2 a, Diem2 b) {
    if (a.x2<b.x2) return true;
    else if (a.x2==b.x2) {
        if (a.y2<b.y2) return true;
        else return false;
    }
    else return false;
}
struct Diem3 {
    int x2,y2,z3;
};
istream& operator >> (istream& iss, Diem3& a) {
    iss>>a.x3>>a.y3>>a.z3;
    return iss;
}
ostream& operator << (ostream& oss, Diem3 a) {
    oss<<"("<<a.x3<<","<<a.y3<<","<<a.z3<<")";
    return oss;
}
double operator - (Diem3& a, Diem3& b) {
    double kq;
    kq=sqrt(pow((b.x3-a.x3),2)+pow((b.y3-a.y3),2)+pow((b.z3-a.z3),2))
    return kq;
}
bool operator < (Diem3 a, Diem3 b) {
    if (a.x3<b.x3) return true;
    else if (a.x3==b.x3) {
        if (a.y3<b.y3) return true;
        else return false;
    }
    else if (a.y3==b.y3) {
        if (a.z3<b.z3) return true;
        else return false;
    }
    else return false;
}
template <typename T>
struct dayDiem {
    T& a[1000];
    int n;
    T& operator >> (int i) {
        return a[i];
    }
};
#include <bits/stdc++.h>
using namespace std;
struct Diem2 {
    int x2,y2;
};
istream& operator >> (istream& is, Diem2& a) {
    is>>a.x2>>a.y2;
    return is;
}
ostream& operator << (ostream& os, Diem2 a) {
    os<<"("<<a.x2<<","<<a.y2<<")";
    return os;
}
double operator - (Diem2& a, Diem2& b) {
    double kq;
    kq=sqrt(pow((b.x2-a.x2),2)+pow((b.y2-a.y2),2));
    return kq;
}
bool operator < (Diem2 a, Diem2 b) {
    if (a.x2<b.x2) return true;
    else if (a.x2==b.x2) {
        if (a.y2<b.y2) return true;
        else return false;
    }
    else return false;
}
struct Diem3 {
    int x3,y3,z3;
};
istream& operator >> (istream& iss, Diem3& a) {
    iss>>a.x3>>a.y3>>a.z3;
    return iss;
}
ostream& operator << (ostream& oss, Diem3 a) {
    oss<<"("<<a.x3<<","<<a.y3<<","<<a.z3<<")";
    return oss;
}
double operator - (Diem3& a, Diem3& b) {
    double kq;
    kq=sqrt(pow((b.x3-a.x3),2)+pow((b.y3-a.y3),2)+pow((b.z3-a.z3),2));
    return kq;
}
bool operator < (Diem3 a, Diem3 b) {
    if (a.x3 < b.x3) return true;
    if (a.x3 > b.x3) return false;
    if (a.y3 < b.y3) return true;
    if (a.y3 > b.y3) return false;

    return a.z3 < b.z3;
}
template <typename T>
struct dayDiem {
    T a[1000];
    int n;
    T& operator [] (int i) {
        return a[i];
    }
};
template <typename T>
double kc (dayDiem<T>p) {
    double mx;
    mx=p[1]-p[0];
    for (int i=0;i<p.n;i++)
        for (int j=i+1;j<p.n;j++)
            if (mx<p[j]-p[i])
                mx=p[j]-p[i];
    return mx;
}
template <typename T>
void nho (dayDiem<T>p) {
    for (int i=0;i<p.n;i++)
        for (int j=i+1;j<p.n;j++)
            if (p[j]<p[i]) swap (p[j],p[i]);
    for (int i=0;i<p.n;i++)
        cout<<p[i]<<" ";
}
template <typename T>
void lon (dayDiem<T>p) {
    for (int i=0;i<p.n;i++)
        for (int j=i+1;j<p.n;j++)
            if (p[i]<p[j]) swap (p[j],p[i]);
    for (int i=0;i<p.n;i++)
        cout<<p[i]<<" ";
}
int main() {
    string s;
    dayDiem<Diem2>p2;p2.n=0;
    dayDiem<Diem3> p3;p3.n=0;
    while (cin>>s) {
        if (s=="Oxy") {
            cin>>p2[p2.n];
            p2.n++;
        }
        else if (s=="Oxyz") {
            cin>>p3[p3.n];
            p3.n++;
        }
    }
    nho(p2);
    cout<<endl;
    lon(p3);
    cout<<endl;
    cout<<roundf(kc(p2)*1000)/1000<<endl<<roundf(kc(p3)*1000)/1000;
}

    cout<<roundf(kc(p2)*1000)/1000<<endl<<roundf(kc(p3)*1000)/1000;
}
