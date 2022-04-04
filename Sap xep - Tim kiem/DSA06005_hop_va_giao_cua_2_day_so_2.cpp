#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int m,n;cin>>n>>m;
        n+=m; int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int inter[n],pt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[i+1]&&i<n-1)
            {
                inter[pt++]=a[i];
                continue;
            }
            cout<<a[i]<<' ';
        }
        cout<<endl;
        for(int i=0;i<pt;i++) cout<<inter[i]<<' ';
        cout<<endl;
    }
}
        