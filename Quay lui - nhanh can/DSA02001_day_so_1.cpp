#include<bits/stdc++.h>
using namespace std;
void slove()
{
    int n;cin>>n;
    int a[11];
    for(int i=1;i<=n;i++) cin>>a[i];
    while(n)
    {
        cout<<'[';
        for(int i=1;i<=n;i++)
        {
            cout<<a[i];
            if(i<n) cout<<' ';
        }
        cout<<']'<<endl;
        for(int i=1;i<=n;i++)
        {
            a[i]=a[i]+a[i+1];
        }
        n--;
    }
    cout<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        slove();
    }
}