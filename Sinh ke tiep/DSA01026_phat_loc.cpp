#include<bits/stdc++.h>
using namespace std;
int x[17],n,N;
void in()
{     
    cout<<8;
    for(int i=1;i<=n;i++)
        if(x[i]==0) cout<<'6';
        else cout<<'8';
    cout<<6;
    cout<<endl;
}
    
void res(int i)
{
    for(int j=0;j<=1;j++)
    {
        x[i]=j;
        if(x[1]==1) break;
        if(x[i])
        {
            if(x[i-1]&&i>1) break;
        }
        else
        {
            if(x[i-1]+x[i-2]+x[i-3]==0&&i>3) continue;
            if(x[i-1]+x[i-2]==0&&i==n) continue;
        }
        if(i==n){ 
            in();
        }
        else res(i+1);
    }
}

int main()
{
        cin>>N;
        n=N-2;
        res(1);
}