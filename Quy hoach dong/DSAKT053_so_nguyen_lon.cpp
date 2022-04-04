#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a,b; cin>>a>>b;
    int c[1005][1005]={0};
    for(int i=1;i<=a.size();i++){
        for(int j=1;j<=b.size();j++)
            if(a[i-1]==b[j-1]) c[i][j]=c[i-1][j-1]+1;
            else c[i][j]=max(c[i-1][j],c[i][j-1]);
    }
    cout<<c[a.size()][b.size()]<<endl;
}

int main(){ 
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}
        