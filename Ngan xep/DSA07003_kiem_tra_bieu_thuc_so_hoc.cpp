#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<char> stk;
        bool checkk=true;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                bool check=true;
                char k=stk.top(); stk.pop();
                while(k!='('&&!stk.empty()){
                    if(k=='+'||k=='-'||k=='*'||k=='/'||k=='%'||k=='^')
                        check=false;
                    k=stk.top(); stk.pop();
                }
                if(check||k!='(')
                {
                    checkk=false;
                    break;
                }
            }else stk.push(s[i]);
        }
        if(!checkk) cout<<"Yes\n";
        else cout<<"No\n";
    }
}