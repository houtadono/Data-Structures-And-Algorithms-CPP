#include <bits/stdc++.h>
using namespace std;

int degree(char c){
    if(c=='^') return 5;
    if(c=='*'||c=='/') return 4;
    if(c=='+'||c=='-') return 3;
    return 2;
}

void solve(){
    string s; cin>>s;
    stack<char> stk;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])) cout<<s[i];
        else if(s[i]=='(') stk.push(s[i]);
        else if(s[i]==')'){
            while(stk.size()&&stk.top()!='('){
                cout<<stk.top();
                stk.pop();
            }
            stk.pop();
        }else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
            while(stk.size()&& degree(stk.top())>= degree(s[i])){
                cout<<stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }
    }
    while(stk.size()){
        if(stk.top()!='(') cout<<stk.top();
        stk.pop();
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
    return 0;
}
