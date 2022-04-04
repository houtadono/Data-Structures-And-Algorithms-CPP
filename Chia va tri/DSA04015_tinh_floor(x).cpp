#include<bits/stdc++.h>
using namespace std;
int n,k;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int pos=-1;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            if(x<=k) pos=i;
        }
        cout<<pos<<endl;
    }
    return 0;
}
        