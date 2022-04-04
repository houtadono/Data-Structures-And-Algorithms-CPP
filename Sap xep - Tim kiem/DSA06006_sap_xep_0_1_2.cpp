#include<bits/stdc++.h>
using namespace std;
int n;

void solve()
{
    cin>>n; int a[n];
    int s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0) s1++;
        else if (a[i]==1) s2++;
        else s3++;
    }
    while(s1--) cout<<"0 ";
    while(s2--) cout<<"1 ";
    while(s3--) cout<<"2 ";
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