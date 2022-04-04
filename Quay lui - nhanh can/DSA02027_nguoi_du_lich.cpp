#include<bits/stdc++.h>
using namespace std;
int n,a[16][16],res=INT_MAX,sum=0,x[16];
bool visited[16];
void ql(int i){
    for(int j=1;j<=n;j++){
        if(visited[j]==false){
            x[i]=j;
            visited[j]=true;
            sum+=a[x[i-1]][j];
            if(i==n) res=min(res,sum+a[j][1]);
            else  if(sum<res) ql(i+1);
            visited[j]=false;
            sum-=a[x[i-1]][j];
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
    memset(visited,false,sizeof(visited));
    visited[1]=true;
    x[1]=1;
    ql(2);
    cout<<res;
}