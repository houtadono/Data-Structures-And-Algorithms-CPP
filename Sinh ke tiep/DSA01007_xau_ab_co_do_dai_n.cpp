#include<bits/stdc++.h>
using namespace std;
int x[11],n;
void in()
{     
    for(int i=1;i<=n;i++)
    {
        if(x[i]==0) cout<<'A';
        else cout<<'B';
    }
    cout<<' ';
}
    
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++) x[i]=0;
    while(1)
    {
        in();
        int i=n;
        while(i>0&&x[i]==1)
        {
            x[i]=0;i--;
        }
        if(i==0) break;
        x[i]=1;
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