#include<bits/stdc++.h>
using namespace std;

/*
    3 0 2
    4 1 5
    0 1 2 
    3 4 5
    0 4 1 
    3 5 2
*/
struct dta{
    string str;
    int dem;
};

string right(string s){
    string x=s;
    x[1]=s[4];x[2]=s[1];
    x[4]=s[5];x[5]=s[2];
    return x;
}
string left(string s){
    string x=s;
    x[1]=s[0];x[3]=s[4];
    x[0]=s[3];x[4]=s[1];
    return x;
}

int solve(string s1, string s2){
    queue<dta> q;
    q.push({s1,0});
    while(q.size()){
        dta tmp =q.front(); q.pop();
        if(tmp.str==s2) return tmp.dem;
        q.push({right(tmp.str),tmp.dem+1});
        q.push({left(tmp.str),tmp.dem+1});
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        string s1="",s2="";
        for(int i=0;i<6;i++){
            int x; cin>>x;
            s1+= x+'0';
        }
        for(int i=0;i<6;i++){
            int x; cin>>x;
            s2+= x+'0';
        }
        cout<<solve(s1,s2)<<endl;
    }
}