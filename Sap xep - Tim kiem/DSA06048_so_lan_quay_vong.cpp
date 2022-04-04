#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    long long t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],res=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[res]>a[i]) res=i;
        }
        cout<<res<<endl;
    }
}