#include <bits/stdc++.h>
using namespace std;
struct Expression{
    int degree,value;
};

vector<Expression> read(string s){
    vector<Expression> ex;
    Expression tmp;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            ex.push_back(tmp);
        }else if(isdigit(s[i])){
            int t=0;
            while(isdigit(s[i])){
                t=t*10+s[i]-'0';
                i++;
            }
            if(s[i]=='*') tmp.value=t;
            else tmp.degree=t;
            i--;
        }
    }
    ex.push_back(tmp);
    return ex;
}

void solve(vector<Expression> ex1, vector<Expression> ex2){
    vector<Expression> res;
    int i=0,j=0;
    int n=ex1.size(),m=ex2.size();
    while(i<n&&j<m){
        if(ex1[i].degree==ex2[j].degree){
            ex1[i].value+=ex2[j].value;
            res.push_back(ex1[i]);
            i++,j++;
        }else if(ex1[i].degree>ex2[j].degree){
            res.push_back(ex1[i]);
            i++;
        }else{
            res.push_back(ex2[j]);
            j++;
        }
    }
    while(i<n) res.push_back(ex1[i++]);
    while(j<m) res.push_back(ex2[j++]);
    for(int i=0;i<res.size();i++){
        cout<<res[i].value<<"*x^"<<res[i].degree;
        if(i<res.size()-1) cout<<" + ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        vector<Expression> ex1=read(s1);
        vector<Expression> ex2=read(s2);
        solve(ex1,ex2);
    } 
    return 0;
}