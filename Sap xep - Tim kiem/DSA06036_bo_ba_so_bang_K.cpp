#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        long long n,k; cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int kt=0;
        for(long i=0;i<n-2;i++){
            long start=i+1;
            long end=n-1;
            while(start<end){
                long long t= a[i]+a[start]+a[end];
                if(t<k) start++;
                else if(t>k) end--;
                else{
                    kt=1;
                    break;
                }
            }
            if(kt) break;
        }
        if(kt) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}