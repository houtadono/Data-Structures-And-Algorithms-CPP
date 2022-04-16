#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int x=n-1,res=n;
    int y=n/2,z=n/2;
    while(x>=z&&y>=0){
        if(a[x]>=2*a[y]){ 
            x--;
            res--;
        }
        y--;
    }
    cout<<res<<endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve(); 
    return 0;
}