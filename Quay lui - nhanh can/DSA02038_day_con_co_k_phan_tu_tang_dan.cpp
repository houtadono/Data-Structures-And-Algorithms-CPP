#include<bits/stdc++.h>
using namespace std;
int n,k,a[15],x[15];
void in(){
    for(int i=1;i<=k;i++) cout<<a[x[i]-1]<<' ';
    cout<<endl;
}
void ql(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k) in();
        else ql(i+1);
    }
}

int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        x[0]=0;
        ql(1);
    }
}