#include <bits/stdc++.h>
using namespace std;

int check(string s){
    return s=="1238004765";
}

string xoay_trai(string x){
    char tmp=x[0];
    x[0]=x[3];x[3]=x[7];x[7]=x[8];
    x[8]=x[5];x[5]=x[1];x[1]=tmp;
    return x;
}

string xoay_phai(string x){
    char tp=x[1];
    x[1]=x[4];x[4]=x[8];x[8]=x[9];
    x[9]=x[6];x[6]=x[2];x[2]=tmp;
    return x;
}

int result(string s){
    if(check(s)) return 0;   
    if(s[4]=='0') return result(xoay_trai(s))+1;
    if(s[5]=='0') return result(xoay_phai(s))+1;
    return min(result(xoay_trai(s))+1,result(xoay_phai(s))+1 );
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