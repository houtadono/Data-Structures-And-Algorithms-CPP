#include<bits/stdc++.h>
using namespace std;
int a[6],kt;
bool vs[6];
vector< int> tmp;
vector< vector<int> > dau;
vector< vector<int> > val;
void ql_dau(int i){
    for(int j=1;j<=3;j++){
        tmp.push_back(j);
        if(i==4) dau.push_back(tmp);
        else ql_dau(i+1);
        tmp.pop_back();
    }
}

void ql(int i){
    for(int j=1;j<=5;j++){
        if(vs[j]==false){
            vs[j]=true;
            tmp.push_back(j);
            if(i==5) val.push_back(tmp);
            else ql(i+1);
            vs[j]=false;
            tmp.pop_back();
        }
    }
}
int check(){
    for(int j=0;j<val.size();j++){
        for(int i=0;i<dau.size();i++){
            long long sum=a[val[j][0]];
            if(dau[i][0]==1) sum+=a[val[j][1]];
            if(dau[i][0]==2) sum-=a[val[j][1]];
            if(dau[i][0]==3) sum*=a[val[j][1]];
            if(dau[i][1]==1) sum+=a[val[j][2]];
            if(dau[i][1]==2) sum-=a[val[j][2]];
            if(dau[i][1]==3) sum*=a[val[j][2]];
            if(dau[i][2]==1) sum+=a[val[j][3]];
            if(dau[i][2]==2) sum-=a[val[j][3]];
            if(dau[i][2]==3) sum*=a[val[j][3]];
            if(dau[i][3]==1) sum+=a[val[j][4]];
            if(dau[i][3]==2) sum-=a[val[j][4]];
            if(dau[i][3]==3) sum*=a[val[j][4]];
            if(sum==23) return 1;
        }
    }
	return 0;
}

int main()
{
    int t;cin>>t;
    ql_dau(1);
    ql(1);
    while(t--){
        kt=0;
        for(int i=1;i<=5;i++) cin>>a[i];
        if(check()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}