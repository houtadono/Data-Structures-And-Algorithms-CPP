#include<bits/stdc++.h>
using namespace std;
long n,k,m;
#define For(i,a,b) for(int i=a;i<b;i++)
void solve()
{
    cin>>n;
    long a[n];
    For(i,0,n) cin>>a[i];
    sort(a,a+n);
    int count=a[n-1]-a[0]-n+1;
    For(i,0,n-1)
    {
        if(a[i]==a[i+1]) count++;
    }
    cout<<count;
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