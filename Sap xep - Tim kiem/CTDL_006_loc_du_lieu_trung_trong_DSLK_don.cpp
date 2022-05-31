#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n,k;cin>>n; int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int b[n];
    int pt=0;
    for(int i=0;i<n;i++){
        int kt=1;
        for(int j=0;j<pt;j++)
            if(b[j]==a[i]){
                kt=0;
                break;
            }
        if(kt){
            b[pt++]=a[i];
            cout<<a[i]<<' ';
        } 
    }
}