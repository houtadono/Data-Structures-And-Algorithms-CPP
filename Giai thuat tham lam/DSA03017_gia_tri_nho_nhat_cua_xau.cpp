#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int k; cin>>k;
        string s; cin>>s;
        int f[150]={0};
        for(int i=0;i<s.size();i++){
            f[s[i]]++;
        }
        priority_queue<int, vector<int>, less<int>> q;
        for(int i=30;i<150;i++){
            if(f[i]) q.push(f[i]);
        }
        while(k){
            int tmp = q.top(); q.pop();
            tmp--;
            if(tmp) q.push(tmp);
            k--;
        }
        long res=0;
        while(q.size()){
            res+= pow(q.top(),2);
            q.pop();
        }
        cout<<res<<endl;
    }
    return 0;
}