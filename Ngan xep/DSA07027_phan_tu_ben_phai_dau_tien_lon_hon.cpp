#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        stack<int> stk,res;
        int n; cin>>n; int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        res.push(-1);
        stk.push(a[n]);
        for(int i=n-1;i>=1;i--){
            while(stk.size()>0){
                if(a[i]<stk.top()) break;
                stk.pop();
            }
            if(stk.empty()) res.push(-1);
            else res.push(stk.top());
            stk.push(a[i]);
        }
        while(res.size()){
            cout<<res.top()<<' ';
            res.pop();
        }
        cout<<endl;
    }
}