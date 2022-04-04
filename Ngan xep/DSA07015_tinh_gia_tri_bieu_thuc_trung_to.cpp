#include <bits/stdc++.h>
using namespace std;

int degree(char c){
    if(c=='^') return 5;
    if(c=='*'||c=='/') return 4;
    if(c=='+'||c=='-') return 3;
    return 2;
}

string trungto_hauto( string s){
    string res="";
    stack<char> stk;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])) res+=s[i];
        else if(s[i]=='(') stk.push(s[i]);
        else if(s[i]==')'){
            while(stk.size()&&stk.top()!='('){
                res+=stk.top();
                stk.pop();
            }
            stk.pop();
        }else if(s[i]=='^'||s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-'){
            if(isdigit( res[res.size()-1])) res+="#";
            while(stk.size()&& degree(stk.top()) >= degree(s[i])){
                res+=stk.top();
                stk.pop();
            }           
            stk.push(s[i]);
        }
    }
    while(stk.size()){
        if(stk.top()!='(') res+=stk.top();
        stk.pop();
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        string s; cin>>s;
        s=trungto_hauto(s);
        stack<long> stk;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                long x=0;
                while(isdigit(s[i])&&i<s.size()){
                    x=x*10+s[i]-'0';
                    i++;
                }
                stk.push(x);
                if(s[i]!='#') i--;
            }else if(s[i]!='#'){
                long b=stk.top(); stk.pop();
                long a=stk.top(); stk.pop();
                if(s[i]=='+') stk.push(a+b);
                if(s[i]=='-') stk.push(a-b);
                if(s[i]=='*') stk.push(a*b);
                if(s[i]=='/') stk.push(a/b);
                if(s[i]=='%') stk.push(a%b);
                if(s[i]=='^') stk.push(pow(a,b));
            }
        }
        cout<<stk.top()<<endl;
    }
    return 0;
}
