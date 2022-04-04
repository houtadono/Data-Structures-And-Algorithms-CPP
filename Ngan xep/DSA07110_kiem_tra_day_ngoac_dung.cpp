#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        stack<char>stk;
        bool res=true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{') stk.push(s[i]);
            else if(s[i]==')'){
                if(stk.empty()) 
                {
                    res=false;
                    break;
                }else if(stk.top()=='(') stk.pop();
            }else if(s[i]==']'){
                if(stk.empty()) 
                {
                    res=false;
                    break;
                }else if(stk.top()=='[') stk.pop();
            }else if(s[i]=='}'){
                if(stk.empty()) 
                {
                    res=false;
                    break;
                }else if(stk.top()=='{') stk.pop();
            }
        }
        if(!stk.empty()) res=false;
        if(res) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}