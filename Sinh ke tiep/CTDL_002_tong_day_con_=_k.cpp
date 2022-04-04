#include<bits/stdc++.h>
using namespace std;
int a[100],x[100];

int main()
{
    int n,k; cin>>n>>k;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]; x[i]=0;
    }
    while(1)
    {
        int sum=0;
        for(int i=n;i>0;i--)
        {
            sum+=a[i]*x[i];
            if(sum>k) break;
        }
        if(sum==k)
        {
            count++;
            for(int i=1;i<=n;i++)
            {
                if(x[i]) cout<<a[i]<<' ';
            }
            cout<<endl;
        }
        int i=n;
        while(i>0&&x[i]==1) x[i--]=0;
        if(i==0) break;
        x[i]++;
    }
    cout<<count;
}