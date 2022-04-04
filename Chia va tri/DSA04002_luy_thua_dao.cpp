#include<bits/stdc++.h>
using namespace std;
long long p=1e9+7;

long long luyThua(long long a,long long b)
{   
    if(b==1) return a%p;
    long long tmp= luyThua(a,b/2);
    if(b%2==0) return (tmp*tmp)%p;
    else return ((tmp*tmp)%p*a)%p;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {   
        long long n,k=0;cin>>n;
        long long N=n;
        while(N)
        {
            k=k*10+N%10;
            N/=10;
        }
        cout<<luyThua(n,k)<<endl;
    }
}
        