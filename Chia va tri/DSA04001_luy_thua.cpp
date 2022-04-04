#include<bits/stdc++.h>
using namespace std;
long long p=1000000007;

long long luyThua(long long a,long long b)
{   
    long long res=1;
    while(b>0)
    {
        if(b%2==1) res=(res*a)%p;
        a=(a*a)%p;
        b/=2;
    }
    return res;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n,k;cin>>n>>k;
        cout<<luyThua(n,k)<<endl;
    }
}
        