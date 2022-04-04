#include<bits/stdc++.h>
using namespace std;
long n,k,m;
#define For(i,a,b) for(int i=a;i<b;i++)
void solve()
{
    cin>>n>>m;
    long a[n],b[m];
    For(i,0,n) cin>>a[i];
    For(i,0,m) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    cout<<(long long) a[n-1]*b[0];
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