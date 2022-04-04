#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);
    deque<int> q;
    int quest;cin>>quest;
    while(quest--){
        string s;cin>>s;
        if(s=="PUSHFRONT"){
            int x; cin>>x;
            q.push_front(x);
        }
        if(s=="PRINTFRONT"){
            if(!q.empty()) cout<<q.front()<<endl;
            else cout<<"NONE"<<endl;
        }
        if(s=="POPFRONT"){
            if(!q.empty()) q.pop_front();
        }
        if(s=="PUSHBACK"){
            int x; cin>>x;
            q.push_back(x);
        }
        if(s=="PRINTBACK"){
            if(!q.empty()) cout<<q.back()<<endl;
            else cout<<"NONE"<<endl;
        }
        if(s=="POPBACK"){
            if(!q.empty()) q.pop_back();
        }
    }
}