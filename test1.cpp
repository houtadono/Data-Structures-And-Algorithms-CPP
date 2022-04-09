#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    stack<char> stk;
    int res=0;
    for(int i=0;i<s.size();i++)
        if(s[i]=='(') stk.push(s[i]);
        else if(stk.size()){
            if(stk.top()=='('){
                res+=2;
                stk.pop();
            }
        }
    cout<<res<<endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
