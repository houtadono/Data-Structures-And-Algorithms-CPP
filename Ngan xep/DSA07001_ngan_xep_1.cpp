#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> q;
    string s;
    int top=0;
    while(cin>>s){
        if(s=="push"){
            int x; cin>>x;
            q.push(x);
            top++;
        }
        if(s=="pop"){
            q.pop();
            top--;
        }
        if(s=="show"){
            if(q.empty()) cout<<"empty";
            else{
                stack<int> tmp;
                while(!q.empty()){
                    tmp.push(q.top());
                    q.pop();
                }
                while(!tmp.empty()){
                    cout<<tmp.top()<<' ';
                    q.push(tmp.top());
                    tmp.pop();
                }
            }
            cout<<endl;
        }
    }
}