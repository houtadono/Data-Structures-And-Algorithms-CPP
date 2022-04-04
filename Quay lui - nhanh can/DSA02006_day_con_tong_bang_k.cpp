#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,a[100],k,x[100],por;
int sum;
void in(int z)
{
    cout<<'[';
    For(i,1,n)
    {
        if(x[i])
        {cout<<a[i];if(i<z) cout<<' ';}
        
    }
    cout<<']'<<' ';
}

void trya(int i)
{
    for(int j=1;j>=0;j--)
    {
        x[i]=j;
        if(i==n)
        {
            sum=0;
            int kt=0;
            For(z,1,n)
            {
                if(x[z])
                {
                    sum+=a[z];
                    kt=z;
                }
                if(sum>k) break;
            }
            if(sum==k)
            {
                in(kt);
                por=1;
            }
        }
        else trya(i+1);

    }
}

void solve()
{
    cin>>n>>k;
    For(i,1,n)
    {
        cin>>a[i];
        x[i]=1;
    }
    sort(a,a+n+1);
    trya(1);
    if(por==0) cout<<"-1";
    cout<<endl;
}
  
int main()
{
    int t;cin>>t;
    while(t--)
    {
        por=0;
        solve();
    }
}