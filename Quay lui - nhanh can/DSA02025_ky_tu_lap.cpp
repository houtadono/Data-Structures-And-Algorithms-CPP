#include<bits/stdc++.h>
using namespace std;
int n,res=INT_MAX,tmp=0,x[11];
string s[11];
bool vs[11];
int kyTuLap(string a,string b){
    bool ss[300];
    memset(ss,false,sizeof(ss));
    for(int i=0;i<a.size();i++)
        ss[a[i]]=true;
    int dem=0;
    for(int i=0;i<b.size();i++)
        if(ss[b[i]]){
            dem++;
            ss[b[i]]=false;
        }
    return dem;
}
void ql(int i){
    for(int j=1;j<=n;j++){
        if(vs[j]==false){
            vs[j]=true;
            x[i]=j;
            int c=0;
            if(i>1) c=kyTuLap(s[j],s[x[i-1]]);
            tmp+=c;
            if(i==n)
                res=min(res,tmp);
            else 
                if(tmp<res) ql(i+1);
            tmp-=c;
            vs[j]=false;
        }
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>s[i];
    ql(1);
    cout<<res;
}