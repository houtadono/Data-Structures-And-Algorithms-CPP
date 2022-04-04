#include<bits/stdc++.h>
using namespace std;
int isDau(char s){
    return s=='+'||s=='-'||s=='*'||s=='/'||s=='^';
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        string s;cin>>s;
        stack<string> stk;
        for(int i=0;i<s.size();i++){
            if(isDau(s[i])){
                string a=stk.top(); stk.pop();
                string b=stk.top(); stk.pop();
                string tmp='('+b+s[i]+a+')';
                stk.push(tmp);
            }else stk.push(string(1,s[i]));
        }
        cout<<stk.top()<<endl;
    }
}