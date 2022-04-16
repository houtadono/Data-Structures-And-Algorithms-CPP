#include <bits/stdc++.h>
using namespace std;
long long p=1e9+7;
long long luythua(long long a, long long b){
    long long res=1;
    while(b>0){
        if(b%2==1) res=(res*a)%p;
        a=(a*a)%p;
        b/=2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    long long a,b;
    while(1){
        cin>>a>>b;
        if(a==b&&a==0) break;
        cout<<luythua(a,b)<<endl;
    }    
    return 0;
}