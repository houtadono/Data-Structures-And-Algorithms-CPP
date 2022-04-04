#include<bits/stdc++.h>
using namespace std;
int a[10000],n,N,k;
vector<int> s;
#define For(i,a,b) for(int i=a;i<b;i++)
void in()
{     
    for(int i=1;i<=k;i++)
        cout<<s[a[i]-1]<<' ';
    cout<<endl;
}
    
void res(int i)
{
    for(int j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if(i==k) in();
        else res(i+1);
    }
}

int main()
{
    cin>>n>>k;
    For(i,0,n)
    {
        int x; cin>>x;
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    for(int i=0;i<s.size()-1;i++) 
    {
        if(s[i]==s[i+1])
        {
            s.erase(s.begin()+i);
            i--;
        } 
    }
    n=s.size();
    a[0]=0;
    res(1);
}