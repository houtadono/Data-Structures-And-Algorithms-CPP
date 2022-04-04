#include<bits/stdc++.h>
using namespace std;
int n,k;
void solve()
{
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int i=n-1;
    while(k--)
    {
        cout<<a[i--]<<' ';
    }
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