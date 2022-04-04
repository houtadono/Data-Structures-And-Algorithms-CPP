#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        string s;cin>>s;
        stack<string> stk;
        stack<int> pos;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='['){
                string tmp="";
                while(stk.size()){
                    if(stk.top()=="]") break;
                    tmp=tmp+stk.top();
                    stk.pop();
                }
                stk.pop();
                i--;              
                int x=0,mu=1;;
                while(isdigit(s[i])){
                    x=(s[i]-'0')*mu+x;
                    i--;
                    mu*=10;
                }
                i++;
                if(x==0) x=1;
                x--;
                string tmp1=tmp;
                while(x--) tmp=tmp+tmp1;
                stk.push(tmp);
            }else stk.push(string(1,s[i]));
            if(s[i]=='[') pos.push(i);
        }
        while(stk.size()){
            cout<<stk.top();
            stk.pop();
        }
        cout<<endl;
    }
}