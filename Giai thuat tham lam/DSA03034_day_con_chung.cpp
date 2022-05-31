#include <bits/stdc++.h>
using namespace std;
void nhap(int *a,int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        int a[n],b[m],c[k];
        nhap(a,n);
        nhap(b,m);
        nhap(c,k);
        int i=0,j=0,z=0,ok=1;
        while(i<n&&j<m&&z<k){
            if(a[i]==b[j]&&a[i]==c[z]){
                cout<<a[i]<<' ';
                ok=0;
                i++;j++;z++;
            }else if(a[i]<b[j]) i++;
            else if(b[j]<c[z]) j++;
            else z++;
        }
        if(ok) cout<<"NO";
        cout<<endl;
    }
}