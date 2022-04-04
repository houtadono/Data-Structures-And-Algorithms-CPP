#include<bits/stdc++.h>
using namespace std;
int x[17],n,N;
void in()
{     
    cout<<'H';
    for(int i=1;i<=n;i++)
        if(x[i]==0) cout<<'A';
        else cout<<'H';
    cout<<'A';
    cout<<endl;
}
    
void res(int i)
{
    for(int j=0;j<=1;j++)
    {
        x[i]=j;
        if(x[i]*x[i-1]==1&&i>1) continue;
        if(x[1]==1) continue;
        if(i==n){ 
            in();
        }
        else res(i+1);
    }
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>N;
        n=N-2;
        if(N==2) in();
        else res(1);
    }
}