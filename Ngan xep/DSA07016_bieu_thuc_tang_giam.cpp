#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    stack<int> stk;
    int j=1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='D'){
            if(i==0||s[i-1]=='I') stk.push(j++);
            stk.push(j++);
        }else{
            while(stk.size()){
                cout<<stk.top();
                stk.pop();
            }
            if(s[i+1]!='D') cout<<(j++);
            if(i==0) cout<<(j++);
        }
    }
    while(stk.size()){
        cout<<stk.top();
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
