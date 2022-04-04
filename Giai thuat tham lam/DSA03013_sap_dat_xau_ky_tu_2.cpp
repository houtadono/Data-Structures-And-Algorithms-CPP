#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int key[300]={0};
        int max=0;
        for(int i=0;i<s.size();i++)
        {
            key[s[i]]++;
            if(key[s[i]]>max) max=key[s[i]];
        }
        if((max-1)*(n-1)>s.size()-max) cout<<-1;
        else cout<<1;
        cout<<endl;
    }
}