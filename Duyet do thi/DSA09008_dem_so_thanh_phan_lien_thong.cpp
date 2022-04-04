#include<bits/stdc++.h>
using namespace std;
vector<int > a[1001];
bool vs[1001];
void DFS(int u){
    vs[u]=true;
    for(int i=0;i<a[u].size();i++)
        if(vs[a[u][i]]==false)
            DFS(a[u][i]);
}
void solve(){
    for(int i=1;i<1001;i++) a[i].clear();
    int canh,n,res=0;
    cin>>n>>canh;
    memset(vs,false,sizeof(vs));
    while(canh--)
    {
        int c,b;cin>>b>>c;
        a[b].push_back(c);
        a[c].push_back(b);
    }
    for(int i=1;i<=n;i++)
        if(vs[i]==false){
            DFS(i);
            res++;
        }
    cout<<res<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
}