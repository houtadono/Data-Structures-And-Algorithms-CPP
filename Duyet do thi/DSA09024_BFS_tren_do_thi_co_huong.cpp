#include<bits/stdc++.h>
using namespace std;
int n;
vector<int > a[1001];
vector<int > res;
bool vs[1001];
void BFS(int u)
{
    int start=0,end=0;
    res.push_back(u);
    vs[u]=true;
    while(start<=end)
    {
        int v= res[start++];
        cout<<v<<' ';
        for(int i=0;i<a[v].size();i++)
            if(vs[a[v][i]]==false)
            {
                vs[a[v][i]]=true;
                res.push_back(a[v][i]);
                end++;
            }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        res.clear();
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
        BFS(start);
        cout<<endl;
    }
}
        