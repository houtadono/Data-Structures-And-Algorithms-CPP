#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        cin>>n;int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int maxx=-1;
        for(int i=0;i<n-1;i++)
            for(int j=n-1;j>i;j--)
                if(a[j]>a[i]){
                    maxx=max(maxx,j-i);
                    break;
                }
        cout<<maxx<<endl;
    }
    return 0;
}