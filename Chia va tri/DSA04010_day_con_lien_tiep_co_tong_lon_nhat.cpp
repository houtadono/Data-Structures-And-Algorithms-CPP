#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
void solve()
{
    int n;
    cin>>n; int a[n];
    bool check=true;
    int max_am=INT_MIN;
    For(i,0,n)
    {
        cin>>a[i];
        if(a[i]>0) check=false;
        if(max_am<a[i]) max_am=a[i];
    }
    if(check) cout<<max_am;
    else
    {
        int sum=0, res=a[0];
        For(i,0,n)
        {
            if(sum+a[i]<0)
            {
                sum=0;
                continue;
            }
            sum+=a[i];
            if(res<sum) res=sum;
        }
        cout<<res;
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    int t;cin>>t;
    while(t--) solve();
}