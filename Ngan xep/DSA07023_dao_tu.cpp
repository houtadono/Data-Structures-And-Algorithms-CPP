#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s; getline(cin,s);
        stack<string> stk;
        s=" "+s;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                while(s[i]!=' '){
                    stk.push(string(1,s[i]));
                    i--;
                }
                i++;
            }else if(stk.size()){
                while(stk.size()){
                    cout<<stk.top();
                    stk.pop();
                }
                cout<<' ';
            }
        }
        cout<<endl;
    }
}