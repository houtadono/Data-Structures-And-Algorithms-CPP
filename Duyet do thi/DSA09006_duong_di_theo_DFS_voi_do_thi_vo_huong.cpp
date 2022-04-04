#include<bits/stdc++.h>
using namespace std;
int n;
vector<int > a[1001];
int truyVet[1001];
bool vs[1001];

void DFS(int u,int v)
{
    if(vs[v]) return;
    vs[u]=true;
    for(int i=0;i<a[u].size();i++)
        if(vs[a[u][i]]==false)
        {
            truyVet[a[u][i]]=u;
            DFS(a[u][i],v);
        }
}
void in(int u,int v)
{
    if(!vs[v]) 
    {
        cout<<-1;
        return;
    }
    vector<int> res;
    while(u!=v)
    {
        res.push_back(u);
        u=truyVet[u];
    }
    res.push_back(v);
    for(int i=res.size()-1;i>=0;i--) cout<<res[i]<<' ';
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        for(int i=0;i<1001;i++)
            a[i].clear();
        int canh,start,end;
        cin>>n>>canh>>start>>end;
        memset(vs,false,sizeof(vs));
        memset(truyVet,0,sizeof(truyVet));
        while(canh--)
        {
            int c,b;cin>>b>>c;
            a[c].push_back(b);
            a[b].push_back(c);
        }
        DFS(start,end);
        in(end,start);
        cout<<endl;
    }
}