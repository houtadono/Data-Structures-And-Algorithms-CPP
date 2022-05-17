#include<bits/stdc++.h>
using namespace std;

void slove(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int rm[n];
    rm[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--) rm[i]=max(rm[i+1],a[i]);
    int res=-1e9;
    int i=0,j=0;
    while(i<n&&j<n){
        if(rm[j]>a[i]){
            res=max(res,j-i);
            j++;
        }
        else i++;
    }
    cout<<res<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) slove();
}