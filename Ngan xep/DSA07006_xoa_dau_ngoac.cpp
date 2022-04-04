#include<bits/stdc++.h>
using namespace std;
string s;
int n,x[11];
typedef struct dat{
    int s,e;
}data;
vector<dat> a;
vector<string> res;

int cmp(dat b, dat c){
    if(b.s<c.s) return 1;
    else return 0;
}

void ql(int i){
    for(int j=0;j<=1;j++){
        x[i]=j;
        if(i==n-1){
            string tmp="";
            int vs[300]={0};
            for(int p=0;p<n;p++)
                if(x[p]==1) {
                    vs[a[p].s]=1; 
                    vs[a[p].e]=1;
                }
            for(int p=0;p<s.size();p++){
                if(vs[p]==0) tmp+=s[p];
            }
            res.push_back(tmp);
        }else ql(i+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cin>>s;
    stack<int> stk;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') stk.push(i);
        else if(s[i]==')'){
            dat x;
            x.s=stk.top();
            x.e=i;
            a.push_back(x);
            stk.pop();
        }
    }
    n=a.size();
    sort(a.begin(),a.end(),cmp);
    ql(0);
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        if(res[i]==s) continue;
        if(res[i]==res[i-1]) continue;
        else cout<<res[i]<<endl;
    }
}