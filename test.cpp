#include <bits/stdc++.h>
using namespace std;
struct dta{
    string s;
    int dem;
};
int pt=0;
int maxx=1000000;
dta M[1000000];
string xoay_trai(string x){
    char tmp=x[3];
    x[3]=x[0];x[0]=x[1];x[1]=x[5];
    x[5]=x[8];x[8]=x[7];x[7]=tmp;
    return x;
}

string xoay_phai(string x){
    char tmp=x[1];
    x[1]=x[2];x[2]=x[6];x[6]=x[9];
    x[9]=x[8];x[8]=x[4];x[4]=tmp;
    return x;
}

void sang(){
    string s="1238004765";
    queue<dta>q;
    q.push({s,0});
    set<string> vs;
    vs.insert(s);
    while(q.size()&&pt<maxx){
        dta tmp=q.front(); q.pop();
        M[pt++]=tmp;
        string a=xoay_trai(tmp.s);
        string b=xoay_phai(tmp.s);
        if(vs.find(a)==vs.end()){
            q.push({a,tmp.dem+1});
            vs.insert(a);
        } 
        if(vs.find(b)==vs.end()){
            q.push({b,tmp.dem+1});
            vs.insert(b);
        } 
    }
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    sang();
    int t;cin>>t;
    while(t--){
        string s;
        for(int i=0;i<10;i++){
            char c;cin>>c;
            s+=string(1,c);
        }
        for(int i=0;i<maxx;i++){
            if(s==M[i].s){
                cout<<M[i].dem<<endl;
                break;
            }
        }
    }
    return 0;
}

/*
  a0  a1  a2       1 2 3
a3  a4  a5  a6    8 0 0 4
  a7  a8  a9       7 6 5
*/
