#include<bits/stdc++.h>
using namespace std;
int a[11][11],n;
void in()
{
    cout<<'[';
    for(int i=1;i<=n;i++)
    {
        cout<<a[n][i];
        if(i<n) cout<<' ';
    }
    cout<<']'<<' ';
}
void slove()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[n][i];
    int N=n;
    n--;
    while(n)
    {
        for(int i=1;i<=n;i++)
        {
            a[n][i]=a[n+1][i]+a[n+1][i+1];
        }
        n--;
    }
    n++;
    while(n<=N)
    {
        in();
        n++;
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