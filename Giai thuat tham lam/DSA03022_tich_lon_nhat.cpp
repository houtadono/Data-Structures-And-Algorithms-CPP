#include<bits/stdc++.h>
using namespace std;
#define max(a,b)  (a>b)? a:b;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    long long res= a[n-1]*a[n-2];
    res= max(res, a[0]*a[1]);
    res= max(res,a[n-1]*a[n-2]*a[n-3]);
    res= max(res,a[n-1]*a[0]*a[1]);
    res= max(res,a[2]*a[1]*a[0]);
    cout<<res;
}