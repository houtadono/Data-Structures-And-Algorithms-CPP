#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            q.push(x);
        }
        long res=0;
        while(q.size()>1){
            int a=q.top(); q.pop();
            int b=q.top(); q.pop();
            q.push(a+b);
            res+=a+b;
        }
        cout<<res<<endl;
    }
}