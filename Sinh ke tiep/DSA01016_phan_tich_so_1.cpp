#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > res;
void ql(int s,vector<int> a)
{
    for(int j=s;j>0;j--)
    {
        if(a.size()>0&&j>a.back()) continue;
        s-=j;
        a.push_back(j);
        if(s==0) res.push_back(a);
        else ql(s,a);
        a.pop_back();
        s+=j;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a;
        ql(n,a);
        for(int i=0;i<res.size();i++){
            cout<<'(';
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j];
                if(j<res[i].size()-1) cout<<' ';
            }
            cout<<") ";
        }
        res.clear();
        cout<<endl;
    }
}