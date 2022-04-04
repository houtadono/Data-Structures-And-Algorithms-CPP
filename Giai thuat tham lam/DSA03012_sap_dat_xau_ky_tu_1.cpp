#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char key[200]={0};
        int kt=1;
        for(int i=0;i<s.size();i++)
        {
            key[s[i]]++;
            if(key[s[i]]>(s.size()+1)/2) kt=-1;
        }
        cout<<kt<<endl;
    }
}