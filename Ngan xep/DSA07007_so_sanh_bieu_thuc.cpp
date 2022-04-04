#include<bits/stdc++.h>
using namespace std;

string trans(string s){
    stack<int> stk;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') stk.push(i);
        else if(s[i]==')'&&!stk.empty()){
            int k=stk.top(); stk.pop();
            if(k==0) continue;
            if(s[k-1]=='+') continue;
            else if(s[k-1]=='-'){
                for(int j=k;j<i;j++){
                    if(s[j]=='+') s[j]='-';
                    else if(s[j]=='-') s[j]='+';
                }
            }
        }
    }
    string res="";
    for(int i=0;i<s.size();i++)
        if(s[i]!='('&&s[i]!=')') res+=s[i];
    return  res;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        string s1,s2; cin>>s1>>s2;
        if(trans(s1)==trans(s2)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}