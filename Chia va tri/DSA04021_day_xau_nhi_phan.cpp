#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x[93];
    x[1]=1;x[2]=1;
    for(int i=3;i<93;i++)
        x[i]=x[i-2]+x[i-1];
    
    int t;cin>>t;
    while(t--)
    {   
        long long n,k;cin>>n>>k;
        while(n>2)
        {
            if(k<=x[n-2]) n-=2;
            else
            {
                k-=x[n-2];
                n-=1;
            }
        }
        if(n==1) cout<<0;
        else cout<<1;
        cout<<endl;
    }
}
        