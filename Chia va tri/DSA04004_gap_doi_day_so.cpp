#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n,k;cin>>n>>k;
        int dem=1;
        while(k%2==0)
        {
            dem++;
            k/=2;
        }
        cout<<dem<<endl;
    }
}
        