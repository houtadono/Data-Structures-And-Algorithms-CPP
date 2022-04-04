#include<bits/stdc++.h>
using namespace std;
int n,vs[1001];
vector<int> a[1001];

void BFS(int i){
    queue<int> q;
    q.push(i);
    while(q.size()){
        int u=q.front(); q.pop();
        vs[u]=1;
        for(int v=0;v<a[u].size();v++)
            if(vs[a[u][v]]==0)
                q.push(a[u][v]);
    }
}

void solve(){
    for(int i=1;i<1001;i++) a[i].clear();
    memset(vs,0,sizeof(vs));
    int canh; cin>>n>>canh;
    int a1[1001]={0};
    while(canh--){
        int c,b;cin>>b>>c;
        a[b].push_back(c);
        a1[c]++;
    }
    int dem=0;
    for(int i=1;i<=n;i++){
        int x= a[i].size()-a1[i];
        if(x==1||x==-1) dem++;
        if(x>1||x<-1) dem+=10;
    }
    if(dem>0){
        cout<<0<<endl;
        return;
    } else cout<<1;
    cout<<endl;
}

int main(){ 
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}
        