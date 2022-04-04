#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
int n,k;

void solve()
{
    cin>>n>>k;
    int kt=-1;
    For(i,0,n)
    {
        int x;cin>>x;
        if(x==k) kt=1;
    }
    cout<<kt;
    cout<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}