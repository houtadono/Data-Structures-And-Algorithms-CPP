#include<bits/stdc++.h>
using namespace std;

int main()
{  
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        cout<<s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='1') s[i]=abs(s[i-1]-'0'-1)+'0';
            else s[i]=s[i-1];
            cout<<s[i];
        }
        cout<<endl;
    }
}
        