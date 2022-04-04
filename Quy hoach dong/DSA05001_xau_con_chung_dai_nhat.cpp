#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        string x,y; cin>>x>>y;
        int c[1005][1005];
        memset(c,0,sizeof(c));
        for(int i=1;i<=x.size();i++)
        {
            for(int j=1;j<=y.size();j++){
                if(x[i-1]==y[j-1]) c[i][j]=c[i-1][j-1]+1;
                else c[i][j]=max(c[i-1][j],c[i][j-1]);
            }
        }
        cout<<c[x.size()][y.size()];
        cout<<endl;
    }
}