#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[10000]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        stack<int> res,stk;
        res.push(-1);stk.push(a[n-1]);
        for(int i=n-2;i>=0;i--){
            int x=a[i];
            while(stk.size()){
                if(b[stk.top()]>b[x]) break;
                stk.pop();
            }
            if(stk.empty()) res.push(-1);
            else res.push(stk.top());
            stk.push(x);
        }
        while(res.size()){
            cout<<res.top()<<' ';
            res.pop();
        }
        cout<<endl;
    }
}