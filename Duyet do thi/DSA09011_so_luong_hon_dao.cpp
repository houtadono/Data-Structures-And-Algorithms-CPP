#include<bits/stdc++.h>
using namespace std;
int m,n,a[501][501];
int check(int i,int j){
    return a[i][j]==1;
}
void truyVet(int i,int j){
    a[i][j]=0;
    if(i>1&&check(i-1,j)) truyVet(i-1,j);
    if(j>1&&check(i,j-1)) truyVet(i,j-1);
    if(i<n&&check(i+1,j)) truyVet(i+1,j);
    if(j<m&&check(i,j+1)) truyVet(i,j+1);
    if(i>1&&j>1&&check(i-1,j-1)) truyVet(i-1,j-1);
    if(i>1&&j<m&&check(i-1,j+1)) truyVet(i-1,j+1);
    if(i<n&&j>1&&check(i+1,j-1)) truyVet(i+1,j-1);
    if(i<n&&j<m&&check(i+1,j+1)) truyVet(i+1,j+1);
}

void solve(){
    cin>>n>>m;
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    int res=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j]==1){
                truyVet(i,j);
                res++;
            }
    cout<<res<<endl;        
}   

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
}