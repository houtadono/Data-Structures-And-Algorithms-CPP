#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int a[n],pos=-1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(k==a[i]) pos=i+1;
        }
        
        if(pos==-1) cout<<"NO";
        else cout<<pos;
        cout<<endl;
    }
}
        