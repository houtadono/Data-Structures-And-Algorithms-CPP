#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int f[1000000]={0};
        int res=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            f[x]++;
            if(f[x]>n/2) res=x;
        }
        if(!res) cout<<"NO";
        else cout<<res;
        cout<<endl;
    }
}      