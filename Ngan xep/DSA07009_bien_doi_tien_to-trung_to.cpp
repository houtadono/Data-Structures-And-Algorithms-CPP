#include<bits/stdc++.h>
using namespace std;

int isPhepTinh(char a){
    return a=='+'||a=='-'||a=='*'||a=='/'||a=='%'||a=='^';
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        stack<string> stk;
        for(int i=s.size()-1;i>=0;i--){
            if(isPhepTinh(s[i])){
                string a1=stk.top(); stk.pop();
                string a2=stk.top(); stk.pop();
                stk.push('('+a1+s[i]+a2+')');
            }else stk.push(string(1,s[i]));
        }
        while(!stk.empty()){
            cout<<stk.top(); stk.pop();
        }
        cout<<endl;
    }
}