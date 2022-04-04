#include<bits/stdc++.h>
using namespace std;
int n,a[9][9],vs[9][9];
vector<string> res;

void ql(int i,int j,string s){
    if(i==j&&i==n&&a[i][j]==1){
        res.push_back(s);
        return;
    }
    vs[i][j]=1;
    if(i<n&&vs[i+1][j]==0&&a[i+1][j]==1) ql(i+1,j,s+"D");
    if(1<j&&vs[i][j-1]==0&&a[i][j-1]==1) ql(i,j-1,s+"L");
    if(j<n&&vs[i][j+1]==0&&a[i][j+1]==1) ql(i,j+1,s+"R");
    if(i>1&&vs[i-1][j]==0&&a[i-1][j]==1) ql(i-1,j,s+"U");
    vs[i][j]=0;
}

int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n;
        res.clear();
        memset(vs,0,sizeof(vs));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        ql(1,1,"");
        if(res.size()==0) cout<<-1;
        else
            for(int i=0;i<res.size();i++) cout<<res[i]<<' ';
        cout<<endl;
    }
}