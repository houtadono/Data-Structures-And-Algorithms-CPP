#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s; cin>>s;
        stack<char> stk;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') stk.push(i);
            if(s[i]==')'&&stk.size()){
                int k=stk.top();stk.pop();
                if(k==0) continue;
                if(s[k-1]=='+') continue;
                if(s[k-1]=='-')
                    for(int j=k;j<i;j++){
                        if(s[j]=='+') s[j]='-';
                        else if(s[j]=='-') s[j]='+';
                    }
            }
        }
        for(int i=0;i<s.size();i++)
            if(s[i]!='('&&s[i]!=')') cout<<s[i];
        cout<<endl;
    }
}