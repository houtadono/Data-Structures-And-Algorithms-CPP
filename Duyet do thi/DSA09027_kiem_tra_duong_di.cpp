#include<bits/stdc++.h>
using namespace std;
vector<int> a[1001];
int pos[1001];
bool vs[1001];
int n,pt;
void BFS(int u){
    vs[u]=true;
    queue<int> q;
    q.push(u);
    while(q.size()>0){
        int top=q.front();q.pop();
        pos[top]=pt;
        for(int i=0;i<a[top].size();i++)
            if(vs[a[top][i]]==false){
                vs[a[top][i]] = true;
                q.push(a[top][i]);
            }
    }
    pt++;
}
void solve(){
    for(int i=1;i<1001;i++) a[i].clear();
    memset(vs,false,sizeof(vs));
    int canh; pt=0;
    cin>>n>>canh;
    while(canh--)
    {
        int c,b;cin>>b>>c;
        a[b].push_back(c);
        a[c].push_back(b);
    }
    for(int i=1;i<=n;i++){
        if(vs[i]==false) BFS(i);
    }
    int quest; cin>>quest;
    while(quest--){
        int x,y; cin>>x>>y;
        if(pos[x]==pos[y]) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
}