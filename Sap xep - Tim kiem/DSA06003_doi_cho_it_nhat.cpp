#include<bits/stdc++.h>
using namespace std;
int n;
void solve()
{
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int count=0;
    for(int i=0;i<n;i++)
    {
        int x=a[i];
        int pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[j];
                pos=j;
            }
        }
        if(x!=a[i])
        {
            a[pos]=x;
            count++;
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