#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    long long t; cin>>t;
    while(t--){
        int n;cin>>n;
        long a[n],s[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0 )s[i]=a[i]+s[i-1];
            else s[i]=a[i];
        }
        long sum=s[n-1],res=0;
        for(int i=0;i<n;i++){
            long bp=sum-s[i];
            if(bp==s[i-1]){
                res=i+1;
                break;
            }
        }
        if(res) cout<<res;
        else cout<<-1;
        cout<<endl;
    }
}