#include<bits/stdc++.h>
using namespace std;

int check(string a,string b){
    int i=0,n=a.size();
    while(i<n){
        if(a[i]!=b[i]) break;
        i++;
    }
    i++;
    return a.substr(i,n-i)==b.substr(i,n-i);
}

int solve(set<string> a ,string u,string v){    
    queue<string> q;
    q.push(u);
    int level=0;
    while(q.size()){
        ++level;
        int x=q.size();
        for(int i=0;i<x;i++){
            string tmp = q.front(); q.pop();
            if(tmp==v) return level;
            for(int j=0;j<tmp.size();j++){
                char orgin= tmp[j];
                for(char c='A';c<='Z';c++){
                    tmp[j]=c;
                    if(tmp==v) return level+1;
                    if(a.find(tmp)==a.end()) continue;
                    q.push(tmp);
                    a.erase(tmp);
                }
                tmp[j]=orgin;
            }
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        set<string> a;
        int n;cin>>n;
        string bd,kt; cin>>bd>>kt;
        for(int i=0;i<n;i++){
            string x; cin>>x;
            if(x!=bd) a.insert(x);
        }
        cout<<solve(a,bd,kt)<<endl;
    }
}