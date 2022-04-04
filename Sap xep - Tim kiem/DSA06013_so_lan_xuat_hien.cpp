#include<bits/stdc++.h>
using namespace std;
int n,k;
void solve()
{
    cin>>n>>k;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==k) count++;
    }
    if(count) cout<<count;
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