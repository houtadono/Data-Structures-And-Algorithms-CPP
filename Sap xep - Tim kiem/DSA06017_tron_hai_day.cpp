#include<bits/stdc++.h>
using namespace std;
long n,k,m;
#define For(i,a,b) for(int i=a;i<b;i++)
void solve()
{
    cin>>n>>m;
    n+=m;
    long a[n];
    For(i,0,n) cin>>a[i];
    sort(a,a+n);
    For(i,0,n) cout<<a[i]<<' ';
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