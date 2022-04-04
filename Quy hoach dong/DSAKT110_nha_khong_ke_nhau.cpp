#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n; cin>>n; int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        long long s[n],res=0;
        s[0]=a[0];
        if(a[1]<a[0]) s[1]=s[0];
        else s[1]=a[1];
        for(int i=2;i<n;i++){
            s[i]=max(a[i]+s[i-2],s[i-1]);
        }
        cout<<s[n-1];
        cout<<endl;
    }
    return 0;
}