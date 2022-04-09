#include <bits/stdc++.h>
using namespace std;

string sum(string a,string b, int k){
    string res="";
    while(a.size()<b.size()) a="0"+a;
    while(b.size()<a.size()) b="0"+b;
    int nho=0;
    for(int i=a.size()-1;i>=0;i--){
        int x=a[i]+b[i]+nho-'0'-'0';
        nho=x/k;
        x%=k;
        res=string(1,x+'0')+res;
    }
    if(nho) res="1"+res;
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while (t--){
        int k; cin>>k;
        string a,b; cin>>a>>b;
        cout<<sum(a,b,k)<<endl;
    }
    return 0;
}