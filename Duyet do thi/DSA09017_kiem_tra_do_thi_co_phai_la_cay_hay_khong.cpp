#include<bits/stdc++.h>
using namespace std;
int n,vs[1001],fr[1001],ok;
vector<int> a[1001];

void BFS(int i){
    queue<int> q;
    q.push(i);
    while(q.size()){
        int u=q.front(); q.pop();
        vs[u]=1;
        for(int v=0;v<a[u].size();v++){
            if(vs[a[u][v]]==0){
                q.push(a[u][v]);
                fr[a[u][v]]=u;
            }else{
                if(a[u][v]!=fr[u]){
                    ok=0;
                    return ;
                }
            }
        }
    }
}

void solve(){
    for(int i=1;i<1001;i++) a[i].clear();
    memset(vs,0,sizeof(vs));
    memset(fr,0,sizeof(fr));
    cin>>n; int canh=n-1;
    while(canh--){
        int c,b;cin>>b>>c;
        a[b].push_back(c);
        a[c].push_back(b);
    }
    ok=1;
    BFS(1);
    for(int i=2;i<=n;i++){
        if(vs[i]==0){
            cout<<"NO\n";
            return ;
        }
    }
    if(ok) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){ 
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}
        