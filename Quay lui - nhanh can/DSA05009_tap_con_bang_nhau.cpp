#include<bits/stdc++.h>
using namespace std;
int n,a[101];
bool ql(int sum,int pos)
{
    if(sum==0)
        return true;
    if(pos>=n)
        return false;
    if(a[pos]<=sum)
    {
        if(ql(sum-a[pos],pos+1)) return true;
    }
    return ql(sum,pos+1);
}
int main()
{

    int t;cin>>t;
    while(t--)
    {
        cin>>n; 
        int sum=0;
        for(int i=1;i<=n;i++) 
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==1) cout<<"NO\n";
        else
        {
            sort(a,a+n);
            if(ql(sum/2,0)) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
        