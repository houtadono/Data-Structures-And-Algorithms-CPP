#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int m,n; cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        int f[m+n]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                f[i+j]+=a[i]*b[j];
            }
        }
        for(int i=0;i<m+n-1;i++) cout<<f[i]<<' ';
        cout<<endl;
    }
}