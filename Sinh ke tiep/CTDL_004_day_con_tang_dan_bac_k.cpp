#include<bits/stdc++.h>
using namespace std;
int n,k,a[101],res=0,x[101];
void ql(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
         if(a[j]>a[x[i-1]]){
            if(i==k) res++;
            else ql(i+1);
        }
    }
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    x[0]=0;
    a[0]=-1;
    ql(1);
    cout<<res;
}