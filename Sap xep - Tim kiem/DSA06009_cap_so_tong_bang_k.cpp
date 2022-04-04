#include<bits/stdc++.h>
using namespace std;
int n,k;
void solve()
{
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k) count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}