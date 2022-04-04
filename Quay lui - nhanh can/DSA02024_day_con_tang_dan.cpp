#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
vector< string > res;
int n,k,a[21],x[21];
string tostring(int x)
{
    string s=" ";
    while(x>0)
    {
        s.insert(0,1,x%10+'0');
        x/=10;
    }
    return s;
}

void ql(int i,string s)
{
    for(int j=x[i-1]+1;j<=n-k+i;j++)
    {
        x[i]=j;
        if(a[x[i]]<a[x[i-1]]) continue;
        string z=s;
        s+=tostring(a[j]);
        if(i==k)  res.push_back(s);
        else  ql(i+1,s);
        s=z;
    }
}

int main()
{
    cin>>n;
    For(i,1,n+1) cin>>a[i];
    x[0]=0;
    a[0]=0;
    res.clear();
    For(i,2,n)
    {
        k=i;
        ql(1,"");
    }
    sort(res.begin(),res.end());
    For(i,0,res.size())
    {
        cout<<res[i];
        cout<<endl;
    }
    
}
        