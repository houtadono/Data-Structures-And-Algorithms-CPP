#include<bits/stdc++.h>
using namespace std;
int n,k,a[21];
vector< vector<int> > res;
vector<int> s;
void in(){
    if(res.size()==0){
        cout<<-1;
        return;
    }
    cout<<res.size()<<" ";
    for(int i=0;i<res.size();i++){
        cout<<'{';
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j];
            if(j<res[i].size()-1) cout<<' ';
        }
        cout<<"} ";
    }
}
void ql(int i,int sum){
    if(sum==0) res.push_back(s);
    for(int j=i ;j<=n;j++){
        s.push_back(a[j]);
        if(sum>0 )ql(j,sum-a[j]);
        s.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        s.clear();
        res.clear();
        for(int i=1;i<=n;i++) cin>>a[i];
        ql(1,k);
        in();
        cout<<endl;
    }
}