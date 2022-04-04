#include<bits/stdc++.h>
using namespace std;
long long f[93];
void solve()
{
    long long n,k;
    cin>>n>>k;
    while(n>2)
    {
        if(k<=f[n-2]) n-=2;
        else{
            k-=f[n-2];
            n-=1;
        }
    }
    if(n==1) cout<<'A';
    else cout<<'B';
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);
    f[1]=f[2]=1;
    for(int i=3;i<=92;i++) f[i]=f[i-2]+f[i-1];

    int t;cin>>t;
    while(t--) solve();
}