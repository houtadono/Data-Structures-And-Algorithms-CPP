#include<bits/stdc++.h>
using namespace std;
long long p=1e9+7;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        long long c[n+1][n+1];
        if(k==0||k==n)
        {
            cout<<1<<endl;
            continue;
        }
        for(int i=0;i<=k;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0||i==j) c[i][j]=1;
                else c[i][j]=(c[i][j-1]+c[i-1][j-1])%p;
            }
        }
        cout<<c[k][n]<<endl;
    }
}      