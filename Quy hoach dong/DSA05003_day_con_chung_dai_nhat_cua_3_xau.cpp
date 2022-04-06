#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,z; cin>>x>>y>>z;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int dp[105][105][105];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            for(int k=1;k<=z;k++){
                if(s1[i-1]==s2[j-1]&&s1[i-1]==s3[k-1])
                    dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                else 
                    dp[i][j][k]= max(dp[i-1][j][k],
                     max(dp[i][j-1][k],dp[i][j][k-1]));
            }
        }
    }
    cout<<dp[x][y][z]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}