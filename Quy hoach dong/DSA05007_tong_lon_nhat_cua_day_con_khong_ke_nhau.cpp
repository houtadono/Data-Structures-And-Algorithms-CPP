#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    long long a[n],dp[n];
    for(int i=0;i<n;i++) cin>>a[i];
    dp[0]=a[0],dp[1]=a[1];
    if(a[1]<a[0]) dp[1]=a[0];
    for(int i=2;i<n;i++)
        dp[i]=max(dp[i-2]+a[i],dp[i-1]);
    cout<<dp[n-1]<<endl;
}
int main(){ 
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}
        