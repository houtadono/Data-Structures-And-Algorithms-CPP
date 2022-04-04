#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
int n,k;

void solve()
{
    cin>>n; int a[n];
    For(i,0,n) cin>>a[i];
    sort(a,a+n);
    int i=0;
    while(i<n&&a[0]==a[i])
    {
        i++;
    }
    if(i!=n) cout<<a[0]<<' '<<a[i];
    else cout<<-1;
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