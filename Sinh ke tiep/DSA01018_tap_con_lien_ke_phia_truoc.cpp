#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n+1];
        for(int i=1;i<=k;i++) cin>>a[i];
        int i=k-1;
        while(i>0&&a[i]==a[i+1]-1) i--;
        if(i==0&&a[i+1]==1){
            for(int j=1;j<=k;j++)
                cout<<n+j-k<<' ';
        }else{
            i++;
            a[i]--;
            for(int j=1;j<=i;j++) cout<<a[j]<<' ';
            for(int j=i+1;j<=k;j++)
                cout<<n+j-k<<' ';
        }
        cout<<endl;
    }
}