#include<bits/stdc++.h>
using namespace std;
int n,res;
void ql(int i,int dem){
    if(i==1){
        res=min(res,dem);
        return ;
    }
    if(dem+1<res){
        if(i%2==0) ql(i/2,dem+1);
        if(i%3==0) ql(i/3,dem+1);
        ql(i-1,dem+1);
    }
}

int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n;
        res=INT_MAX;
        ql(n,0);
        cout<<res<<endl;
    }
}