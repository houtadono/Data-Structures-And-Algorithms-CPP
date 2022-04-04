#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    long long t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[n],res=0,tmp=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                if(a[i]>a[i-1]) b[i]=1;
                else if(a[i]<a[i-1]) b[i]=0;
                else b[i]=2;
            }else b[i]=1;
        }
        for(int i=0;i<n;i++){
            if(b[i-1]!=1&&b[i]==1&&i>1){
                res=max(res,tmp);
                tmp=2;
            }
            else if(b[i]==2){
                res=max(res,tmp);
                tmp=1;
            }else tmp++;
        }
        res=max(res,tmp);
        cout<<res<<endl;
    }
}