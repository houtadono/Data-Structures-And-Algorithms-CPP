#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        long long res=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            res+=a[i];
        }
        sort(a,a+n);
        long long res1=res;
        for(int i=0;i<k;i++) res-=a[i]*2;
        for(int i=0;i<n-k;i++) res1-=a[i]*2;
        cout<<max(res,res1)<<endl;
    }
}