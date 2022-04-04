#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
int a[11][11],n,kt;
vector<string> res;
void in()
{
    For(i,0,res.size())
        cout<<res[i]<<' ';
    res.clear();
}

void ttsinh(int i,int j,string s1)
{
    if(!a[0][0])
    {
        return ;
    }
    if(i==j&&i==n-1&&a[i][j])
    {
        res.push_back(s1);
        kt=1;
        return ;
    }
    if(a[i+1][j]&&i<n-1) 
        ttsinh(i+1,j,s1+"D");

    if(a[i][j+1]&&j<n-1) 
        ttsinh(i,j+1,s1+"R");
}

void solve()
{
    kt=0;
    cin>>n;
    For(i,0,n)
        For(j,0,n) 
            cin>>a[i][j];
    ttsinh(0,0,"");
    if(!kt) cout<<-1;
    else    in();
    cout<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}