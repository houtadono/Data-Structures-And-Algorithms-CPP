#include<bits/stdc++.h>
using namespace std;

void slove()
{
    int n,k;
    cin>>n>>k;
    int x[n+1];
    for(int i=1;i<=k;i++) cin>>x[i];
    int i=k;
    while(i>0&&x[i]==n-k+i) i--;
    if(i==0)
    {
        for(int j=1;j<=k;j++) cout<<j<<' ';
    }
    else{
        x[i]++;
        for(int j=1;j<=i;j++) cout<<x[j]<<' ';
        for(int j=i+1;j<=k;j++)
        {
            x[j]=x[i]+j-i; 
            cout<<x[j]<<' ';
        }
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