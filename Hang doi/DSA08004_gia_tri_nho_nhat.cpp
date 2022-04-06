#include<bits/stdc++.h>
using namespace std;
void solve(){
    int k; string s;
    cin>>k>>s;
    int d[300]={0};
    for(int i=0;i<s.size();i++){
        d[s[i]]++;
    }
    priority_queue<long long , vector<long long>> q;
    for(int i=0;i<300;i++)
        if(d[i]) q.push(d[i]);
    while(q.size()&&k>0){
        int top=q.top(); q.pop();
        top--;
        k--;
        q.push(top);
    }
    long long res=0;
    while(q.size()){
        res+=pow(q.top(),2);
        q.pop();
    }
    cout<<res<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}