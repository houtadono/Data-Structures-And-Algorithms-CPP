#include<bits/stdc++.h>
using namespace std;
int n;
void solve()
{
    cin>>n;
    int a[n];
    int res=INT_MAX;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int z=a[i]+a[j];
            if(abs(res)>abs(z)) res=z;
        }
    }
    cout<<res<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}