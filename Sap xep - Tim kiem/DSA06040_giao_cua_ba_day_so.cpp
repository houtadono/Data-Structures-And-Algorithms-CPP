#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int m,n,p; cin>>m>>n>>p;
        long long a[m],b[n],c[p];
        for(int i=0;i<m;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<p;i++) cin>>c[i];
        int i=0,j=0,k=0;
        int kt=1;
        while(i<m&&j<n&&k<p){
            if(a[i]==b[j]&&a[i]==c[k]){
                cout<<a[i]<<' ';
                kt=0;
                i++;
                j++;
                k++;
            }else if(min(a[i],min(b[j],c[k]))==b[j]) j++;
            else if(min(a[i],min(b[j],c[k]))==c[k]) k++;
            else i++;
        }
        if(kt) cout<<-1;
        cout<<endl;
    }
}