#include<bits/stdc++.h>
using namespace std;
int x[40],n,k,a[40];
void solve()
{
    cin>>n>>k;
    for(int i=1;i<=k;i++) 
    {
        cin>>x[i];
        a[i]=x[i];
    }
    int i=k;
    while(i>0&&a[i]==n-k+i) i--;
    if(i==0)
    {
        cout<<k<<endl;
        return;
    }
    int count=i-1;
    x[i]++;
    if(binary_search(a+i,a+k+1,x[i])) count++;
    for(int j=i+1;j<=k;j++)
    {
        x[j]=x[i]+j-i;
        if(binary_search(a+i,a+k+1,x[j])) count++;
    }
    cout<<(k-count)<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}