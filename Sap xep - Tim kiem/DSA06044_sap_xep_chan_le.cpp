#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n;cin>>n;
    long a[n],b[n];
    for(int i=0;i<n/2;i++){
        cin>>a[i];
        cin>>b[i];
    }
    if(n%2==1) cin>>a[n/2];
    int pta=n/2+n%2;
    sort(a,a+pta); 
    sort(b,b+n/2,greater<long>());
    for(int i=0;i<n/2;i++) cout<<a[i]<<' '<<b[i]<<' ';
    if(n%2==1) cout<<a[n/2];
    cout<<endl;
}