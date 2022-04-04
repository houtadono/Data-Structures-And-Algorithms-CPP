#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > res;
vector<int> tmp;
void ql(int i,int sum){
    for(int j=i;j>=1;j--){
        sum-=j;
        tmp.push_back(j);
        if(sum==0) res.push_back(tmp);
        else 
            if(sum>0) ql(j,sum);
        tmp.pop_back();
        sum+=j;
    }
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        res.clear();
        int n; cin>>n;
        ql(n,n);
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            cout<<'(';
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j];
                if(j<res[i].size()-1) cout<<' ';
            }
            cout<<") ";
        }
        cout<<endl;    
    }
}