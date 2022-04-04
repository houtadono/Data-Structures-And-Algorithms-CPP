#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        stack<int> stk,res;
        stk.push(a[n-1]); res.push(-1);
        for(int i=n-2;i>=0;i--){
            if(stk.size()){
                while(stk.size()){
                    if(a[i]<stk.top()) break;
                    stk.pop();
                }
                if(stk.empty()) res.push(-1);
                else{
                    int j=i+1,kt=0;
                    while(j<n){
                        if(a[j]==stk.top()) kt=1;
                        if(a[j]<stk.top()&&kt) break;
                        j++;
                    }
                    if(j<n) res.push(a[j]);
                    else  res.push(-1);
                }
                stk.push(a[i]);
            }
        }
        while(res.size()){
            cout<<res.top()<<' ';
            res.pop();
        }
        cout<<endl;
    }
}