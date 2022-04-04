#include<bits/stdc++.h>
using namespace std;
int n;

void solve()
{
    cin>>n; int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    int i=0;
    while(a[i]==b[i]) i++;
    cout<<i+1<<' ';
    i=n-1;
    while(a[i]==b[i]) i--;
    cout<<i+1;
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