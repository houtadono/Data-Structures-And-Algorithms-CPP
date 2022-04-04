#include<bits/stdc++.h>
using namespace std;
int n,V;
int a[1005],c[1005];
void solve(){
    int dp[1005][1005];
    memset(dp,0,sizeof(dp));
    int res=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=V;j++){
            if(j<a[i]) dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+c[i]);
            res=max(res,dp[i][j]);
        }
    }
    cout<<res<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        cin>>n>>V;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>c[i];
        solve();
    }
}