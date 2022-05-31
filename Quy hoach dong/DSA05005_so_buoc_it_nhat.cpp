#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int f[n]={0};
        for(int i=0;i<n;i++) cin>>a[i];
        int res=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[j]<=a[i])
                    f[i]=max(f[i],f[j]+1);
            }
            res=max(res,f[i]);
        }
        cout<<n-res-1<<endl;
    }
}