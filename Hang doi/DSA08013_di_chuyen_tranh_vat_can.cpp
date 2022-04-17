#include <bits/stdc++.h>
using namespace std;

struct point{
    int x,y;
    int count;
};

int check(point x, point y){
    if(x.x==y.x&&x.y==y.y) return 1;
    return 0;
}

int solve(char **a, int n, point start, point target){
    start.count=0;
    queue<point> q;
    q.push(start);
    bool vs[n][n]={};
    while(q.size()){
        point tmp= q.front(); q.pop();
        if(check(tmp,target)) return tmp.count;
        vs[tmp.x][tmp.y]= true;

        for(int i=tmp.x+1;i<n && a[i][tmp.y]=='.' ;i++){
            point t={i,tmp.y,tmp.count+1};
            if(check(t,target)) return t.count;
            if(vs[i][tmp.y]==false){
                vs[i][tmp.y]=true;
                q.push(t);
            }
        }

        for(int i=tmp.x-1;i>=0 && a[i][tmp.y]=='.' ;i--){
            point t={i,tmp.y,tmp.count+1};
            if(check(t,target)) return t.count;
            if(vs[i][tmp.y]==false){
                vs[i][tmp.y]=true;
                q.push(t);
            }
        }

        for(int i=tmp.y;i<n && a[tmp.x][i]=='.' ;i++){
            point t={tmp.x,i,tmp.count+1};
            if(check(t,target)) return t.count;
            if(vs[tmp.x][i]==false){
                vs[tmp.x][i]=true;
                q.push(t);
            }
        }

        for(int i=tmp.y;i>=0 && a[tmp.x][i]=='.' ;i--){
            point t={tmp.x,i,tmp.count+1};
            if(check(t,target)) return t.count;
            if(vs[tmp.x][i]==false){
                vs[tmp.x][i]=true;
                q.push(t);
            }
        }
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        char **a= new char*[n];
        for(int i=0;i<n;i++){
            a[i]= new char[n];
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        }
        point start, target;
        cin>>start.x>>start.y>>target.x>>target.y;
        cout<<solve(a,n,start,target)<<endl;
    }
    return 0;
}