#include<bits/stdc++.h>
using namespace std;
int n,vt[11],a[11];
void in()
{
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}

void ql(int i)
{
    if(i>n) in();
    for(int j=1;j<=n;j++)
    {
        if(vt[j]==0)
        {
            if(i>1&&abs(j-a[i-1])==1) continue;
            a[i]=j;
            vt[j]=1;
            ql(i+1);
            vt[j]=0;
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>n;
        ql(1);
    }
}
        