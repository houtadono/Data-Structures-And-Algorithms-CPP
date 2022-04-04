#include<bits/stdc++.h>
using namespace std;
int n,a[16];
vector< vector<int> > res;
vector<int> tmp;
void ql(int i,int sum){
    for(int j=i+1;j<n;j++){
        sum+=a[j];
        tmp.push_back(a[j]);
        if(sum%2==1){
            vector<int> k=tmp;
            reverse(k.begin(),k.end());
            res.push_back(k);
        }
        ql(j,sum);
        tmp.pop_back();
        sum+=a[j];
    }
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        res.clear();
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ql(-1,0);
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].size();j++)
                cout<<res[i][j]<<' ';
            cout<<endl;
        }
    }
}