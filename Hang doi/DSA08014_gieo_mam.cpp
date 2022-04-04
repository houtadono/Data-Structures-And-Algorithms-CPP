#include <bits/stdc++.h>
using namespace std;
int n,m,a[505][505],res;
bool vs[505][505];
int X[]={ 0,-1,0,1};
int Y[]={-1, 0,1,0};
struct dta{
    int i,j,dem;
};
deque<dta> q;

void solve1(int i,int j){
    vs[i][j]=true;
    q.push_front({i,j,0});
    while(q.size()){
        dta tmp=q.front(); 
        if(a[tmp.i][tmp.j]==1) return;
        q.pop_front();
        for(int k=0;k<4;k++){
            int x=X[k]+tmp.i, y=Y[k]+tmp.j;
            if(x>0&&y>0&&x<=n&&y<=m&&!vs[x][y]){
                vs[x][y]=true;
                if(a[x][y]==2) q.push_front({x,y,0});
                else if(a[x][y]==1) q.push_back({x,y,1});
            } 
        }
    }
}

void solve2(){
    while(q.size()){
        dta tmp=q.front(); q.pop_front();
        res=max(tmp.dem,res);
        for(int k=0;k<4;k++){
            int x=X[k]+tmp.i, y=Y[k]+tmp.j;
            if(x>0&&y>0&&x<=n&&y<=m&&!vs[x][y]&&a[x][y]==1){
                vs[x][y]=true;
                q.push_back({x,y,tmp.dem+1});
            } 
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        memset(vs,false,sizeof(vs));
        res=0;
        for(int i=1;i<=n;i++)       
            for(int j=1;j<=m;j++)   cin>>a[i][j];
        queue<dta> check1;
        for(int i=1;i<=n;i++)       
            for(int j=1;j<=m;j++)
                if(a[i][j]==2&&!vs[i][j]) solve1(i,j);
                else if(a[i][j]==1) check1.push({i,j,0});
        solve2();
        int kt=0;
        while(check1.size()){
            dta tmp=check1.front();check1.pop();
            if(vs[tmp.i][tmp.j]==false){
                kt=1;
                break;
            }
        }
        if(kt) cout<<-1;
        else cout<<res;
        cout<<endl;
    }
    return 0;
}