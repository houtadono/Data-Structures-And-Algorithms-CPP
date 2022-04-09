#include <bits/stdc++.h>
using namespace std;
long long p=1e9+7;
void solve(){
    int n,k; cin>>n>>k;
    long long dp[n+k]={0};
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=min(i,k);j++){
            dp[i]+=dp[i-j];
            dp[i]%=p;
        }
    }
    cout<<dp[n]<<endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
    return 0;
}