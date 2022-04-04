#include<bits/stdc++.h>
using namespace std;
int n,m;
int kt(int x,int y[],int lenY,int eY[])
{
    if(x==0) return 0;
    if(x==1) return eY[0];
    int* idx = upper_bound(y, y + lenY, x);
    int res = (y + lenY) - idx;
    res+=(eY[1]+eY[0]);
    if(x==2) res-=(eY[3]+eY[4]);
    if(x==3) res+=eY[2];
    return res;
}

void solve()
{
    cin>>n>>m; int a[n],b[m];
    int dem=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int eY[5]={0};
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(b[i]<5) eY[b[i]]++;
    }
    sort(b,b+m);
    for(int i=0;i<n;i++)
        dem+=kt(a[i],b,m,eY);
    cout<<dem;
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