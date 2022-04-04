#include<bits/stdc++.h>
using namespace std;
int n,x[100],N,kt;

void in()
{
    if(kt==1)
    {
        for(int i=1;i<=n;i++) cout<< x[i]<<' ';
        cout<<"0 ";
        for(int i=n;i>=1;i--) cout<< x[i]<<' ';
        cout<<endl;
        for(int i=1;i<=n;i++) cout<< x[i]<<' ';
        cout<<"1 ";
        for(int i=n;i>=1;i--) cout<< x[i]<<' ';
        cout<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++) cout<< x[i]<<' ';
        for(int i=n;i>=1;i--) cout<< x[i]<<' ';
        cout<<endl;
    }      
}
    
void res()
{
    in();
    int i=n;
    while(i>0&&x[i]==1)
    {
        x[i]=0;i--;
    }
    if(i>0)
    {
        x[i]=1;
        res();
    }
}

int main()
{
    cin>>N;
    kt=N%2;n=N/2;
    for(int i=1;i<=n;i++) x[i]=0;
    res();
}