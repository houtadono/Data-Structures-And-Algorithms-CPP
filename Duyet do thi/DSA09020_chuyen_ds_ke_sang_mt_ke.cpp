#include<bits/stdc++.h>
using namespace std;
int n,dem,k;
#define For(i,a,b) for(int i=a;i<b;i++)

int main()
{
    cin>>n;
    string s;
    int d[n+1][n+1];
    memset(d,0,sizeof(d));
    int pt=1;
    cin.ignore();
    while(getline(cin,s))
    {
        s+=" ";
        int so=0;
        for(int i=0;i<s.size();i++)
        {
            while(isalnum(s[i]))
            {
                so=so*10+s[i]-'0';
                i++;
            }
            d[pt][so]=1;
            so=0;
        }
        pt++;
    }
    For(i,1,n+1)
    {
        For(j,1,n+1)
        {
            cout<<d[i][j]<<' ';
        }
        cout<<endl;
    }
}
        