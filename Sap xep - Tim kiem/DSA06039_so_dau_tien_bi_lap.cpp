#include<bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        cin>>n;int a[n];
        int check=n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            for(int j=0;j<check&&j<i;j++)
            {
                if(a[i]==a[j])
                {
                    if(check>j) check=j;
                    break;
                }
            }
        }
        if(check==n) cout<<"NO";
        else cout<<a[check];
        cout<<endl;
    }
    return 0;
}