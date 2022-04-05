#include<bits/stdc++.h>
using namespace std;
vector<int > a;
vector<int > ke[10001];
void sang(){
    int nto[10000]={0};
    for(int i=2;i<10000;i++){
        if(nto[i]==0){
            if(i>=1000) a.push_back(i);
            for(int j=i*i;j<10000;j+=i)
                nto[j]=1;
        }
    }
}

int check(int a,int b){
    int dem=0;
    while(a){
        if(a%10!=b%10) dem++;
        if(dem==2) return 0;
        a/=10;
        b/=10;
    }
    return dem==1;
}

void tao_ds_ke(){
    for(int i=0;i<a.size();i++)
        for(int j=i+1;j<a.size();j++)
            if(check(a[i],a[j])){
                ke[a[i]].push_back(a[j]);
                ke[a[j]].push_back(a[i]);
            }
}

int solve(int u,int v){
    queue<int> q;
    q.push(u);
    int vs[10001]={0};
    int dem[10001]={0};
    dem[u]=0;
    vs[u]=1;
    while(q.size()){
        int tmp=q.front();q.pop();
        if(tmp==v) return dem[tmp];
        for(int i=0;i<ke[tmp].size();i++){
            if(vs[ke[tmp][i]]==0){
                vs[ke[tmp][i]]=1;
                q.push(ke[tmp][i]);
                dem[ke[tmp][i]]= dem[tmp]+1;
            }
        }
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    a.clear();
    sang();
    tao_ds_ke();
    int t; cin>>t;
    while(t--){
        int u,v;cin>>u>>v;
        cout<<solve(u,v)<<endl;
    }
}