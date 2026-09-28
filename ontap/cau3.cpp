#include <bits/stdc++.h>
using namespace std;
int n,m,k;
int ax,ay;
int bx,by;
int dx[2]={0,1};
int dy[2]={1,0};
string a[100][100];
int mx=INT_MIN;
bool check=false;
void Try(int x, int y, int nangluong) {
    if (x==bx&&y==by) {
        check=true;
        if (nangluong>mx) {
            mx=nangluong;
        }
    }
    else if (nangluong<=0) {
        return;
    }
    for (int i=0;i<2;i++) {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if (nx>=0&&ny>=0&&nx<=n&&ny<=m&&a[nx][ny]!="#") {
            Try(nx,ny,nangluong-1+stoi(a[nx][ny]));
        }
    }
}
int main() {
    ifstream fin ("robot.inp");
    ofstream fout ("robot.out");
    cin>>n>>m>>k;
    cin>>ax>>ay>>bx>>by;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    Try(ax,ay,k);
    if (check=true) cout<<"YES "<<mx;
    else cout<<"NO";
}
