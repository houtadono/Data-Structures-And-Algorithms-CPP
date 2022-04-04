#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    string s=" ";
    for(char c='A';c<='Z';c++) s+=c;
    while(t--)
    {   
        int n,k;cin>>n>>k;
        int res=1;
        while(k%2==0)
        {
            res++; k/=2;
        }
        cout<<s[res]<<endl;
    }
}
        