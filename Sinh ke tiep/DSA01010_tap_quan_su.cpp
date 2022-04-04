#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],d[100];

int main()
{  
    int t; cin>>t;
    while(t--){
        cin>>n>>k; 
        memset(d,0,sizeof(d));
        for(int i=1;i<=k;i++){
            cin>>a[i];
            d[a[i]]++;
        } 
        int i=k;
        while(i>0&&a[i]==n-k+i) i--;
        if(i==0) cout<<k;
        else{
            a[i]++;
            for(int j=i+1;j<=k;j++)
                a[j]=a[i]+j-i;
            int trung=0;
            for(int i=1;i<=k;i++){
                d[a[i]]++;
                if(d[a[i]]==2) trung++;
            }
            cout<<k-trung;
        }
        cout<<endl;
    }
}
        