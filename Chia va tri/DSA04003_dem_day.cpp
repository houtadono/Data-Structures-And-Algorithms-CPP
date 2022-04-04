#include<bits/stdc++.h>
using namespace std;
long long p=123456789;

long long luyThua(long long a,long long b)
{   
    if(b==1) return a;
    long long tmp= luyThua(a,b/2);
    if(b%2==0) return (tmp*tmp)%p;
    else return ((tmp*tmp)%p*a)%p;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        cout<<luyThua(2,(n-1))<<endl;
    }
}
        