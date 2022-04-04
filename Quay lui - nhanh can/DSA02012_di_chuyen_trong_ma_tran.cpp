#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
int a[101][101],n,m,ct;

void ttsinh(int i,int j)
{
    if(i==n-1&&j==m-1)
    {
        ct++;
        return ;
    }
    if(i<n-1) 
        ttsinh(i+1,j);
    if(j<m-1) 
        ttsinh(i,j+1);
}

void solve()
{
    ct=0;
    cin>>n>>m;
    For(i,0,n)
        For(j,0,m) 
            cin>>a[i][j];
    ttsinh(0,0);
    cout<<ct;
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