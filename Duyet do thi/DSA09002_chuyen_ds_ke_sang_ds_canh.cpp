#include<bits/stdc++.h>
using namespace std;
int n,dem,k;
#define For(i,a,b) for(int i=a;i<b;i++)

int main()
{
    cin>>n;
    string s;
    vector<int> res[n+1];
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
            if(so>pt)
            {
                res[pt].push_back(so);
            }
            so=0;
        }
        pt++;
    }
    For(i,1,n+1)
        For(j,0,res[i].size())
            cout<<i<<' '<<res[i][j]<<endl;
}
        