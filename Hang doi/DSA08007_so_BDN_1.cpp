#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        string s; cin>>s;
        int i=0;
        for(;i<s.size();i++)
            if(s[i]>='2') break;
        long long k=1,res=0;
        for(int j=s.size()-1;j>=i;j--){
            res+=k;
            k*=2;
        }
        for(int j=i-1;j>=0;j--){
            res+=k*(s[j]-'0');
            k*=2;
        }
        cout<<res<<endl;
    }
}