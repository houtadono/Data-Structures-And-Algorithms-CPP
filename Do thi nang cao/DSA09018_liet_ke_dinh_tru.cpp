#include <bits/stdc++.h>
using namespace std;
vector<int> a[1001];
int n,vs[1001];

void DFS(int i){
    vs[i]=1;
    for(int j=0;j<a[i].size();j++)
        if(vs[a[i][j]]==0)
            DFS(a[i][j]);
}

int TPLT(){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(vs[i]==0){
            dem++;
            DFS(i);
        }
    }
    return dem;
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
            a[p2].push_back(p1);
        }
        int k=TPLT();
        for(int i=1;i<=n;i++){
            memset(vs,0,sizeof(vs));
            vs[i]=1;
            if(k<TPLT()) cout<<i<<' ';
        }
        cout<<endl;
    }
}