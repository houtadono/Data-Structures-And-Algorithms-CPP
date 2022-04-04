#include<bits/stdc++.h>
using namespace std;
int n;
vector<int > a[1001];
bool vs[1001];
void DFS(int u)
{
    cout<<u<<' ';
    vs[u]=true;
    for(int i=0;i<a[u].size();i++)
        if(vs[a[u][i]]==false)
        {
            DFS(a[u][i]);
        }
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
        int canh,start;
        cin>>n>>canh>>start;
        memset(vs,false,sizeof(vs));
        while(canh--)
        {
            int c,b;cin>>b>>c;
            a[b].push_back(c);
        }
        DFS(start);
        cout<<endl;
    }
}
        