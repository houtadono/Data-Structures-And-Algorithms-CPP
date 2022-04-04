#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long res=0;
        for(int i=0;i<n-1;i++){
            int id=lower_bound(a,a+n,a[i]+k)-a;
            int c=id-i-1;
            if(c>0) res+=c;
        }
        cout<<res;
        cout<<endl;
    }
    return 0;
}