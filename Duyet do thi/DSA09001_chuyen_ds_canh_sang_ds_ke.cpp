#include<bits/stdc++.h>
using namespace std;
int n,dem,k;
#define For(i,a,b) for(int i=a;i<b;i++)

int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> a[n+1];
        while(k--)
        {
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(int i=1;i<=n;i++)
        {
            cout<<i<<": ";
            for(int j=0;j<a[i].size();j++)
                cout<<a[i][j]<<' ';
            cout<<endl;
        }
    }
}