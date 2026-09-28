#include <bits/stdc++.h>
using namespace std;

int n;
int dx[2]={1,1};
int dy[2]={0,1};
int tongmx=0;
int ddi[100];
int ddimax[10000][100];
int a[100][100];
int dem;
void Try (int x,int y,int tong) {
    ddi[x]=a[x][y];
    tong+=a[x][y];
    if (x==n-1) {
        if (tong>tongmx) {
            tongmx=tong;
            dem=1;
            for (int i=0;i<n;i++) {
                ddimax[0][i]=ddi[i];
            }
        }
        else if (tong==tongmx) {
            for (int i=0;i<n;i++) {
                ddimax[dem][i]=ddi[i];
            }
            dem++;
        }

    }
    else {
        for (int i=0;i<2;i++) {
            int nx=x+dx[i];
            int ny=y+dy[i];
            if (nx<n&&ny>=0&&ny<=nx)
                Try(nx,ny,tong);
        }

    }
}

int main () {
    cin>>n;
    for (int i=0;i<n;i++) {
        for (int j=0;j<i+1;j++) {
            cin>>a[i][j];
        }
    }
    Try(0,0,0);
            cout<<tongmx<<endl;
    for (int i=0;i<dem;i++) {
        for (int j=0;j<n;j++) {
            cout<<ddimax[i][j]<<" ";
        }
        cout<<endl;
    }

}
