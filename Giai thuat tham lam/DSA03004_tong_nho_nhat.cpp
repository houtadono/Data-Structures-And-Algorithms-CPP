#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long res=0;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int i=0;
        if(n%2==1) res=a[i++];
        for(;i<n;i+=2)
        {
            res=res*10+a[i]+a[i+1];
        }
        cout<<res<<endl;
    }
}