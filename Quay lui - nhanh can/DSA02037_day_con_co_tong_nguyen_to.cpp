#include<bits/stdc++.h>
using namespace std;
int n,a[16],nt[1500]={0};
vector< vector<int> > res;
vector<int> tmp;
void sang(){
    nt[0]=1;
    nt[1]=1;
    for(int i=2;i<1500;i++){
        if(nt[i]==0)
            for(int j=i*i;j<1500;j+=i)
                nt[j]=1;
    }
}
void ql(int i,int sum){
    for(int j=i+1;j<n;j++){
        sum+=a[j];
        tmp.push_back(a[j]);
        if(nt[sum]==0){
            vector<int> k=tmp;
            reverse(k.begin(),k.end());
            res.push_back(k);
        }
        ql(j,sum);
        tmp.pop_back();
        sum-=a[j];
    }
}
int main()
{
    sang();
    int t; cin>>t;
    while(t--){
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