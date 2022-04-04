#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    int a[n][m],res=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>a[i][j];
    for(int i=1;i<n;i++)
        for(int j=1;j<m;j++){
            if(a[i][j]) a[i][j]=min(a[i-1][j-1],min(a[i][j-1],a[i-1][j]))+1;
            res=max(res,a[i][j]);
        }
    cout<<res<<endl;
}
int main(){ 
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}
        