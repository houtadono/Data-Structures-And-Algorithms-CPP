#include <bits/stdc++.h>
using namespace std;
int ok;
string s;
vector<int> pos;
int check(string str){
    int a = (str[0]-'0')*10+(str[1]-'0');
	int b = (str[5]-'0')*10+(str[6]-'0');
	int c = (str[10]-'0')*10+(str[11]-'0');
	char x = str[3];
    if (x== '+' && a + b == c) return  1;
    if (x== '-' && a - b == c) return  1;
    return 0;
}

void ql(int i,string str){
    if(!ok) return;
    if(i==pos.size()){
        if(check(str)){
            cout<<str<<endl;
            ok=0;
        }
        return;
    }
    if(pos[i]==3){
        string tmp = str;
        tmp[3] = '+' ; ql(i+1,tmp);
        tmp[3] = '-' ; ql(i+1,tmp);
    }else{
        char st ='0';
        if(pos[i]==0||pos[i]==5||pos[i]==10) st++;
        for(;st<='9';st++){
            string tmp = str;
            tmp[pos[i]] = st;
            ql(i+1,tmp);
        }
    }
}

void solve(){
    pos.clear(); ok=1;
    if(s[3]=='/'||s[3]=='*'||s[0]=='0'||s[5]=='0'||s[10]=='0'){
        cout<<"WRONG PROBLEM!\n";
        return;
    }
    for(int i=0;i<s.size();i++)
        if(s[i]=='?') pos.push_back(i);
    ql(0,s);
    if(ok) cout<<"WRONG PROBLEM!\n";
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        solve();
    }
}