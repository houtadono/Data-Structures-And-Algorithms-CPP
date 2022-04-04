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
            if(s[i]=='(' || stk.empty()) stk.push(s[i]);
            else if(s[i]==')'&&stk.top()=='(') stk.pop();
            else stk.push(s[i]);
        }
        int d1=0,d2=0;
        while(stk.size()){
            if(stk.top()=='(') d1++;
            else d2++;
            stk.pop();
        }
        cout<<d1/2+d2/2+d1%2+d2%2<<endl;
    }
}