#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {   
        int n;cin>>n;
        int dem=0;
        while(n--)
        {
            int x;cin>>x;
            if(!x) dem++;
        }
        cout<<dem<<endl;
    }
}
        