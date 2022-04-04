#include<bits/stdc++.h>
using namespace std;
vector<int > a[1001];
bool vs[1001];
int n;
void BFS(int u){
    vs[u]=true;
    queue<int> q;
    q.push(u);
    while(q.size()>0){
        int top=q.front();q.pop();
        for(int i=0;i<a[top].size();i++)
            if(vs[a[top][i]]==false){
                vs[a[top][i]] = true;
                q.push(a[top][i]);
            }
    }
}
int TPLT(){
    int dem=0;
    for(int i=1;i<=n;i++)
        if(vs[i]==false){
            BFS(i);
            dem++;
        }
    return dem;
}
void solve(){
    for(int i=1;i<1001;i++) a[i].clear();
    int canh,res=0;
    cin>>n>>canh;
    memset(vs,false,sizeof(vs));
    while(canh--)
    {
        int c,b;cin>>b>>c;
        a[b].push_back(c);
        a[c].push_back(b);
    }
    int truoc=TPLT();
    for(int i=1;i<=n;i++){
        memset(vs,false,sizeof(vs));
        vs[i]=true;
        if(TPLT()>truoc) cout<<i<<' ';
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
}