#include<bits/stdc++.h>
using namespace std;
int n,k;
void solve()
{
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key = a[i];
        while(j>=0 && abs(key-k)<abs(a[j]-k))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<' ';
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