#include<bits/stdc++.h>
using namespace std;
int a[17],n,N;
int s[17];
bool vt[17];
#define For(i,a,b) for(int i=a;i<b;i++)
void in()
{     
    for(int i=1;i<=n;i++)
        cout<<s[a[i]-1]<<' ';
    cout<<endl;
}
    
void res(int i)
{
    if(i>n) in();
    for(int j=1;j<=n;j++)
    {
        if(!vt[j])
        {
            vt[j]=true;
            a[i]=j;
            res(i+1);
            vt[j]=false;
        }
    }
}

int main()
{
    cin>>n;
    For(i,0,n) 
    {
        cin>>s[i];
        vt[i+1]=false;
    }
    sort(s,s+n);
    res(1);
}