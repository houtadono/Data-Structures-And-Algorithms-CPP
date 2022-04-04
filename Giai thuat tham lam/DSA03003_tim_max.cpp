#include<bits/stdc++.h>
using namespace std;
long long p=1e9+7;
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
        for(int i=1;i<n;i++)
        {
            int x=a[i];
            res=(res+(x*i)%p)%p;
        }
        cout<<res<<endl;
    }
}