#include<bits/stdc++.h>
using namespace std;
int n,M;
int a[105];
void solve(){
    int dp[105][25001];
    memset(dp,0,sizeof(dp));
    int res=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=M;j++){
            if(j<a[i]) dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+a[i]);
            res=max(res,dp[i][j]);
        }
    }
    cout<<res<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cin>>M>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    solve();
}