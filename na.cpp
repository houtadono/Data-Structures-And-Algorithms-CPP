#include <bits/stdc++.h>
using namespace std;
vector<int> a[1001];
int n,vs[1001];

bool DFS(int u){
    vs[u]=1;
    for(int v=0;v<a[u].size();v++){
        if(vs[a[u][v]]==0){
            if(DFS(a[u][v])) return true;
        }else if(vs[a[u][v]]==1) return true;
    }
    vs[u]=2;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        for(int i=1;i<1001;i++) a[i].clear();
        memset(vs,0,sizeof(vs));
        int m; cin>>n>>m;
        while(m--){
            int p1,p2; cin>>p1>>p2;
            a[p1].push_back(p2);
        }
        int kt=0;
        for(int i=1;i<=n;i++){
            if(vs[i]==0)
            if(DFS(i)){
                kt=1;
                break;
            }
        }
        if(kt) cout<<"YES";
        else cout<<"NO";       
        cout<<endl;
    }
}