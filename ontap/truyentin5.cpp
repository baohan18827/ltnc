#include <bits/stdc++.h>
using namespace std;
int n,m,x,y;
bool used[1000][1000];
char a[100][100];
bool check=false;
string s;
int toado[100][2];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void Try (int x, int y,int buoc) {
    if (buoc==s.size()-1) {
        check=true;
        cout<<"THANH CONG"<<endl;
        for (int i=0;i<s.size();i++) {
                cout<<"("<<toado[i][0]<<", "<<toado[i][1]<<")";
            if (s.size()-1) cout<<endl;
        }
    }
    for (int i=0;i<4;i++) {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if (nx>=0&&ny>=0&&nx<n&&ny<m&&!used[nx][ny]&&a[nx][ny]==s[buoc+1]) {
            used[nx][ny]=true;
            toado[buoc+1][0]=nx;
            toado[buoc+1][1]=ny;
            Try(nx,ny,buoc+1);
            used[nx][ny] = false;
        }
    }
}
int main () {
    cin>>n>>m>>x>>y;
    cin>>s;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    toado[0][0] = x;
    toado[0][1] = y;
    used[x][y] = true;
    Try(x,y,0);
    if (!check) cout<<"THAT BAI";
}
