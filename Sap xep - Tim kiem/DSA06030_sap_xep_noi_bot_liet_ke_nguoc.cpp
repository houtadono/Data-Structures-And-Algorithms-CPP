#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
int n;
vector< vector<int> > res;
void in()
{
    for(int i=res.size()-1;i>=0;i--)
    {
        cout<<"Buoc "<<i+1<<": ";
        for(int j=0;j<n;j++)
            cout<<res[i][j]<<' ';
        cout<<endl;
    }
    res.clear();
}
void solve()
{
    cin>>n; vector<int> a;
    a.clear();
    For(i,0,n)
    {
        int x;cin>>x;
        a.push_back(x);
    }
    For(i,0,n-1) 
    {
        int kt=1;
        For(j,0,n-1)
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                kt=0;
            }
        if(kt) break;
        res.push_back(a);
    }
    in();
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--) solve();
}