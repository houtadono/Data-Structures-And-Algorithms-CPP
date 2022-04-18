#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        priority_queue<long long,vector<long long>,greater<long long>> q;
        for(long long i=0;i<n;i++){
            long long x;cin>>x;
            q.push(x);
        }
        long res=0;
        while(q.size()>1){
            long long a=q.top(); q.pop();
            long long b=q.top(); q.pop();
            long long tmp=(a+b)%mod;
            q.push(tmp);
            res=(res+tmp)%mod;
        }
        cout<<res<<endl;
    }
    return 0;
}