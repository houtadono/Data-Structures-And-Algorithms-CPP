#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > res;
int n,a[11][11];
bool c[11];
vector<int> b;
void ql(int i,int s)
{
    for(int j=1;j<=n;j++){
        if(c[j]==false){
            c[j]=true;
            s-=a[i][j];
            b.push_back(j);
            if(s>=0&&i<=n)
            {
                if(s==0&&i==n) res.push_back(b);
                else ql(i+1,s);
            }
            b.pop_back();
            s+=a[i][j];
            c[j]=false;
        }
    }
}

int main(){
    int k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    ql(1,k);
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++)
            cout<<res[i][j]<<' ';
        cout<<endl;
    }
}