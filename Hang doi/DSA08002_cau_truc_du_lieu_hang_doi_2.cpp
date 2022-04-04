#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);
    queue<int> q;
    int quest;cin>>quest;
    while(quest--){
        string s;cin>>s;
        if(s=="PUSH"){
            int x;cin>>x;
            q.push(x);
            continue;
        }
        if(s=="POP"){
            if(!q.empty()) q.pop();
        }else{
            if(!q.empty()) cout<<q.front()<<endl;
            else cout<<"NONE\n";
        }
    }
}