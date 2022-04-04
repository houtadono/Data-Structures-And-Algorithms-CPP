#include<bits/stdc++.h>
using namespace std;
vector<int> a[100001];
bool vs[100001];
int n,dem;
void BFS(int u){
    vs[u]=true;
    queue<int> q;
    q.push(u);
    while(q.size()>0){
        int top=q.front();q.pop();
        dem++;
        for(int i=0;i<a[top].size();i++)
            if(vs[a[top][i]]==false){
                vs[a[top][i]] = true;
                q.push(a[top][i]);
            }
    }
}
void solve(){
    for(int i=1;i<1001;i++) a[i].clear();
    memset(vs,false,sizeof(vs));
    int canh, res=0;
    cin>>n>>canh;
    while(canh--)
    {
        int c,b;cin>>b>>c;
        a[b].push_back(c);
        a[c].push_back(b);
    }
    for(int i=1;i<=n;i++){
        if(vs[i]==false){
            dem=0;
            BFS(i);
            res=max(dem,res);
        } 
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