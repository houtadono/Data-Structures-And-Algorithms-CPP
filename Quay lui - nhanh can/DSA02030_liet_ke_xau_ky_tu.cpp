#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
int n,k,x[50];
string s="";
bool vt[50];
void in()
{
    for(int i=1;i<=k;i++)
        cout<<s[x[i]-1];
    cout<<endl;
}

void ql(int i)
{
    for(int j=x[i-1];j<=n;j++)
    {
        x[i]=j;
        if(i==k)  in();
        else  ql(i+1);
    }
}

int main()
{
    char c;
    cin>>c>>k;
    for(n=0;'A'+n<=c;n++)
    {
        s+='A'+n;
    }
    x[0]=1;
    ql(1);
}
        