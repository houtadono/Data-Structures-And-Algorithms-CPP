#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n,k;cin>>n; int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>k;
    for(int i=0;i<n;i++)
        if(a[i]!=k) cout<<a[i]<<' ';
}