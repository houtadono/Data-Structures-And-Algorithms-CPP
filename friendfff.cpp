#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    long n; cin>>n;
    char s[n+1];
    for(int i=1;i<=n;i++) cin>>s[i];
    pair<int,int> p[n+1];
    for(int i=1;i<=n;i++){
        string tmp=string(1,s[i]);
        for(int j=i+1;j<=n;j++){
            tmp+=s[j];
            if(s[j]==s[i]){
                if(check(tmp))
            }
        }
    }
}