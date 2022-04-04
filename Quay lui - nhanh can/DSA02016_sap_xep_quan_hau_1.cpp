#include<bits/stdc++.h>
using namespace std;
int n,dem,k;
bool h[11],c[11],c1[22],c2[22];
#define For(i,a,b) for(int i=a;i<b;i++)
    
void res(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(!h[i]&&!c[j]&&!c1[i+j-1]&&!c2[i-j+n])
        {
            h[i]=true;c[j]=true;
            c1[i+j-1]=true;c2[i-j+n]=true;
            if(i==n) dem++;
            else res(i+1);
            h[i]=false;c[j]=false;
            c1[i+j-1]=false; c2[i-j+n]=false;
        }
    }
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        dem=0;
        cin>>n;
        res(1);
        cout<<dem<<endl;
    }
}