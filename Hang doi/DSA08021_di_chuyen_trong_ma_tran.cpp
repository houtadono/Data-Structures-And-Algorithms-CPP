#include <bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005];
bool vs[1005][1005];
struct dta{
    int st,en,dem;
};
int solve(){
    queue<dta> q;
    q.push({1,1,0});
    memset(vs,false,sizeof(vs));
    vs[1][1]=true;
    while(q.size()>0){
        dta tmp=q.front();q.pop();
        if(tmp.st==n&&tmp.en==m) return tmp.dem;
        vs[tmp.st][tmp.en]=true;
        int y=tmp.en+a[tmp.st][tmp.en];
        int x=a[tmp.st][tmp.en]+tmp.st;
        if(y>0&&y<=m&&!vs[tmp.st][y]) q.push({tmp.st,y,tmp.dem+1});
        if(x>0&&x<=n&&!vs[x][tmp.en]) q.push({x,tmp.en,tmp.dem+1});
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++) cin>>a[i][j];
        cout<<solve();
        cout<<endl;
    }
    return 0;
}