#include <bits/stdc++.h>
using namespace std;
struct dta{
    string s;
    int dem;
};

int check(string s){
    return s=="1238004765";
}

string xoay_trai(string x){
    string s=x;
    s[1]=x[0]; s[0]=x[3];
    s[3]=x[7]; s[5]=x[1];
    s[7]=x[8]; s[8]=x[5];
    return s;
}

string xoay_phai(string x){
    string s=x;
    s[1]=x[4];s[4]=x[8];s[8]=x[9];
    s[9]=x[6];s[6]=x[2];s[2]=x[1];
    return s;
}

int result(string s){
    queue<dta>q;
    q.push({s,0});
    set<string> vs;
    vs.insert(s);
    while(q.size()){
        dta tmp=q.front(); q.pop();
        if(check(tmp.s)) return tmp.dem;
        string a=xoay_trai(tmp.s);
        if(vs.find(a)==vs.end()){
            q.push({a,tmp.dem+1});
            vs.insert(a);
        }

        string b=xoay_phai(tmp.s);
        if(vs.find(b)==vs.end()){
            q.push({b,tmp.dem+1});
            vs.insert(b);
        }
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        string s;
        for(int i=0;i<10;i++){
            char c;cin>>c;
            s+=string(1,c);
        }
        cout<<result(s);
        cout<<endl;
    }
    return 0;
}

/*
  a0  a1  a2       1 2 3
a3  a4  a5  a6    8 0 0 4
  a7  a8  a9       7 6 5
*/
/*
  a0  a4  a1       1 2 3
a3  a8  a5  a2    8 0 0 4
  a7  a9  a6       7 6 5
*/