#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,s; cin>>n>>s;
    int a[n],c[n+1][s+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int j=1;j<=s;j++) c[0][j]=0;
    for(int i=0;i<=n;i++) c[i][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            if(j<a[i]) c[i][j]= c[i-1][j];
            else c[i][j]= max(c[i-1][j],c[i-1][j-a[i]]);
        }
    }
    if(c[n][s]) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){ 
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}
        