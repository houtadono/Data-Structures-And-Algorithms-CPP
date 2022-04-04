#include<bits/stdc++.h>
using namespace std;
int n;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int i=0,check=-1;
        while(i<n-1)
        {
            int x; cin>>x;
            if(x!=a[i]&&check==-1) check=i;
            i++;
        }
        cout<<check+1<<endl;
    }
    return 0;
}
        