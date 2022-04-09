#include <bits/stdc++.h>
using namespace std;
int res=INT_MAX, N,n; ;
int x[9],vs[9];
string s[9],tmp;
int hieu(string a, string b){
    int sub=0,nho=0;
    int k=1;
    for(int i=a.size()-1;i>=0;i--){
        int x=a[i]-b[i]-nho;
        if(x<0){
            x+=10;
            nho=1;
        }else nho=0;
        sub+=x*k;
        k*=10;
        if(sub>res) return sub;
    }
    return sub;
}
void hoanVi(int u){
    if(u==n){
        string maxs,mins;
        for(int i=0;i<N;i++){
            tmp="";
            for(int j=0;j<n;j++){
                tmp+=s[i][x[j]];
            }
            if(i==0){
                maxs=tmp;
                mins=tmp;
            }else{
                if(maxs<tmp) maxs=tmp;
                if(mins>tmp) mins=tmp;
            }
        }
        res=min(res,hieu(maxs,mins));
        return;
    }
    for(int i=0;i<n;i++){
        if(vs[i]==0){
            x[u]=i;
            vs[i]=1;
            hoanVi(u+1);
            vs[i]=0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cin>>N>>n;
    for(int i=0;i<N;i++) cin>>s[i];
    hoanVi(0);
    cout<<res;
    return 0;
}