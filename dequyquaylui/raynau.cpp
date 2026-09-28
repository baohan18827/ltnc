#include <bits/stdc++.h>
using namespace std;
int dx=[2]={0,1};
int dy=[2]={1,0};
int n,m;
int visited [100][100];
int a[100][100];
void Try (int x, int y) {
    for (int i=0;i<2;i++) {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if (nx>=0&&ny>=0&&nx<=m&&ny<=n&&a[nx][ny]==1) {
            visited[nx][ny]=1;
            Try(nx,ny);
        }
    }

}
int main () {
    cin>>m>>n;
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    int dem=0;
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            if (a[i][j]==1&&visited[i][j]==0)
                visited[i][j]=1;
                Try(i,j);
                dem++;
        }
    }

}
