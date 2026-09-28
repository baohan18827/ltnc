#include <bits/stdc++.h>
using namespace std;
int n;
int dx[8]={-1,1,2,2,1,-1,-2,-2};
int dy[8]={2,2,1,-1,-2,-2,-1,1};
bool visited[100][100];
int socach=0;
void Try (int x, int y, int step) {
    if (step==n*n) {
        socach++;
    }
    else {
        for (int i=0;i<8;i++) {
            int nx=x+dx[i];
            int ny=y+dy[i];
            if (nx>=0&&ny>=0&&nx<n&&ny<n&&!visited[nx][ny]) {
                visited[nx][ny]=true;
                Try(nx,ny,step+1);
                visited[nx][ny]=false;
            }
        }
    }
}

int main () {
    cin>>n;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            memset(visited,false,sizeof(visited));
            visited[i][j]=true;
            Try(i,j,1);
        }
    }
    cout<<socach;
}
