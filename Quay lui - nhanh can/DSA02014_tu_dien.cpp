#include<bits/stdc++.h>
using namespace std;
int d,n,m;
int X[8]={-1,-1,-1, 0, 0, 1, 1, 1};
int Y[8]={-1, 0, 1,-1, 1,-1, 0, 1};
string dir[102];
char a[5][5];
vector<string> res;
bool vs[5][5];

void ql(int i,int j,string tmp){
    for(int p=0;p<d;p++)
        if(tmp==dir[p]){
            res.push_back(tmp);
            break;
        }
    for(int p=0;p<8;p++){
        int x=i+X[p];
        int y=j+Y[p];
        if(x>=0&&y>=0&&x<n&&y<m&&vs[x][y]==false){
            vs[x][y]=true;
            ql(x,y,tmp+a[x][y]);
            vs[x][y]=false;
        }
    }
}

void solve(){
    cin>>d>>n>>m;
    res.clear();
    for(int i=0;i<d;i++) cin>>dir[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            vs[i][j]=true;
            string s="";
            ql(i,j,s+a[i][j]);
            vs[i][j]=false;
        }
    if(res.size()==0)
        cout<<-1;
    else
        for(int i=0;i<res.size();i++) cout<<res[i]<<' ';
    cout<<endl;
}   

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
}