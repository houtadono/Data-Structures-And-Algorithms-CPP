#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long a[n],b[n],res=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+n,greater<long long>());
        for(int i=0;i<n;i++){
            res+= a[i]*b[i];
        }
        cout<<res<<endl;
    }
    return 0;
}