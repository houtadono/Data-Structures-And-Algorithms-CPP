#include<bits/stdc++.h>
using namespace std;
long long p=1e9+7;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int res=INT_MAX;
        int i=0;
        while(i<n-1)
        {
            res=min(res,abs(a[i+1]-a[i]));
            i++;
        }
        cout<<res<<endl;
    }
}      