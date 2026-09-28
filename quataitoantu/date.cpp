#include <bits/stdc++.h>
using namespace std;

struct Date {
    int ngay,thang,nam;
};

istream& operator>>(istream& is, Date& a){
    is>>a.ngay>>a.thang>>a.nam;
    return is;
}

ostream& operator<<(ostream& os, Date a){
    if(a.ngay<10) os<<"0";
    os<<a.ngay<<"/";
    if(a.thang<10) os<<"0";
    os<<a.thang<<"/"<<a.nam;
    return os;
}

bool nhuan(Date a){
    if(a.nam%400==0 || (a.nam%4==0 && a.nam%100!=0)) return true;
    return false;
}

int songaythang(int thang, int nam){
    if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12) return 31;
    if(thang==4||thang==6||thang==9||thang==11) return 30;
    if(thang==2){
        Date t={1,2,nam};
        if(nhuan(t)) return 29;
        return 28;
    }
}

int ng(Date a){
    int kq=0;
    for(int i=1;i<a.thang;i++){
        kq+=songaythang(i,a.nam);
    }
    kq+=a.ngay;
    return kq;
}

int thu(Date a){
    int d=a.ngay;
    int m=a.thang;
    int y=a.nam;

    if(m<3){
        m+=12;
        y--;
    }

    int n=(d+2*m+(3*(m+1))/5+y+(y/4))%7;
    return n;
}

Date tiep(Date a){
    Date b=a;
    b.ngay++;

    if(b.ngay>songaythang(a.thang,a.nam)){
        b.ngay=1;
        b.thang++;
        if(b.thang>12){
            b.thang=1;
            b.nam++;
        }
    }
    return b;
}

bool operator==(Date a, Date b){
    return a.ngay==b.ngay&&a.thang==b.thang&&a.nam==b.nam;
}

bool trungthu(Date a, Date b){
    return thu(a)==thu(b);
}

bool operator<(Date a, Date b){
    if(a.nam<b.nam) return true;
    if(a.nam==b.nam){
        if(a.thang<b.thang) return true;
        if(a.thang==b.thang){
            if(a.ngay<b.ngay) return true;
        }
    }
    return false;
}

int operator-(Date a, Date b){
    if(b<a) swap(a,b);
    int day=0;
    while(a<b){
        a=tiep(a);
        day++;
    }
    return day;
}

void xuatthu(Date a){
    int n=thu(a);
    if(n==0) cout<<"Sunday";
    else if(n==1) cout<<"Monday";
    else if(n==2) cout<<"Tuesday";
    else if(n==3) cout<<"Wednesday";
    else if(n==4) cout<<"Thursday";
    else if(n==5) cout<<"Friday";
    else cout<<"Saturday";
}

int main(){
    Date a,b;
    cin>>a>>b;

    cout<<a<<" "; xuatthu(a);
    cout<<" "<<ng(a)<<" "<<tiep(a)<<" ";
    if(nhuan(a)) cout<<"TRUE";
    else cout<<"FALSE";
    cout<<endl;

    cout<<b<<" "; xuatthu(b);
    cout<<" "<<ng(b)<<" "<<tiep(b)<<" ";
    if(nhuan(b)) cout<<"TRUE";
    else cout<<"FALSE";
    cout<<endl;

    if(trungthu(a,b)) cout<<"TRUE";
    else cout<<"FALSE";
    cout<<endl;

    if(a<b) cout<<"1<2";
    else if(a==b) cout<<"1=2";
    else cout<<"1>2";
    cout<<endl;

    int n=b-a;
    cout<<n;
}
