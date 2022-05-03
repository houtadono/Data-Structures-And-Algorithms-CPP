#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int d,s; cin>>d>>s;
        stack<int> stk;
        while(d>0){
            s--;
            if(d>9) {stk.push(9); d-=9;}
            else{ stk.push(d); d=0;}
        }
        if(s<0){
            cout<<-1<<endl;
            continue;
        }
        if(s>0){
            cout<<1;
            s--;
            while(s--) cout<<0;
            cout<< stk.top()-1;
            stk.pop();
        }
        while(stk.size()) {cout<<stk.top(); stk.pop();}
        cout<<endl;
    }
    return 0;
}