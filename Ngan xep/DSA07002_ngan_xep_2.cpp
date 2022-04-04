#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> q;
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        if(s=="PUSH"){
            int x; cin>>x;
            q.push(x);
        }
        if(s=="POP")
            if(!q.empty()) q.pop();
        if(s=="PRINT"){
            if(q.empty()) cout<<"NONE";
            else cout<<q.top();
            cout<<endl;
        }
    }
}