#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void xuly(int n){
    queue<string> q;
    q.push("6");
    while(1){
        string s=q.front();q.pop();
        if(s.size()>n) break;
        res.push_back(s);
        if(s[s.size()-1]=='6'&&s.size()==1){
            string res1=s;
            res1[s.size()-1]='8';
            q.push(res1);
        }
        q.push(s+"6");
        q.push(s+"8");
    }
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--){
        res.clear();
        int n;cin>>n;
        xuly(n);
        cout<<res.size()<<endl;
        for(int i=res.size()-1;i>=0;i--)
            cout<<res[i]<<' ';
        cout<<endl;
    }
}