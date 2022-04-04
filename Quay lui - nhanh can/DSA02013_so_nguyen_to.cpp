#include<bits/stdc++.h>
using namespace std;
int a[200],x[200],pta=1,k,n,bd;
vector<vector<int> > res;
vector<int> tmp;
void sang_nguyen_to(){
    int nt[200]={0};
    for(int i=2;i<200;i++)
        if(nt[i]==0){
            a[pta++]=i;
            for(int j=i*i;j<200;j+=i)
                nt[j]=1;           
        }
}          
void ql(int i,int sum){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        tmp.push_back(a[j+bd]);
        sum-=a[j+bd];
        if(i==k){
            if(sum==0) res.push_back(tmp);
        }else ql(i+1,sum);
        sum+=a[j+bd];
        tmp.pop_back();
    }
}
int main()
{
    sang_nguyen_to();
    int t;cin>>t;
    while(t--){
        int sum,start;
        cin>>k>>start>>sum;
        tmp.clear();
        res.clear();
        int pos=1;
        while(a[pos]<=start) pos++;
        bd=pos-1;
        while(a[pos]<sum) pos++;
        n=pos-bd;
        x[0]=0;
        ql(1,sum);
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].size();j++)
                cout<<res[i][j]<<' ';
            cout<<endl;
        }
    }
}