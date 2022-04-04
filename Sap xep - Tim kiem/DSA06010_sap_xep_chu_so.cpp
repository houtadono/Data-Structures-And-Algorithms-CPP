#include<bits/stdc++.h>
using namespace std;
int n;
void solve()
{
    cin>>n;
    int a[n];
    string s="";
    for(int i=0;i<n;i++)
    {
        string tmp;
        cin>>tmp;
        s+=tmp;
    }
    int res[10]={0};
    for(int i=0;i<s.size();i++)
    {
        res[s[i]-'0']++;
    }
    for(int i=0;i<10;i++)
        if(res[i]) cout<<i<<' ';
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