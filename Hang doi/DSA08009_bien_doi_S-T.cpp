#include<bits/stdc++.h>
using namespace std;
struct pta{
    int val;
    int dem;
};
int solve(int a,int b){
    queue<pta> q;
    bool vs[1000001];
    memset(vs,false,sizeof(vs));
    vs[a]=true;
    q.push({a,0});
    while(q.size()>0){
        pta tmp=q.front(); q.pop();
        if(tmp.val==b) return tmp.dem;
        if(tmp.val*2==b||tmp.val-1==b) return tmp.dem+1;
        if(vs[tmp.val*2]==false&&tmp.val<b){
            q.push({tmp.val*2, tmp.dem+1});
            vs[tmp.val*2]=true;
        }
        if(vs[tmp.val-1]==false&&tmp.val-1>0){
            q.push({tmp.val-1, tmp.dem+1});
            vs[tmp.val-1]=true;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
}