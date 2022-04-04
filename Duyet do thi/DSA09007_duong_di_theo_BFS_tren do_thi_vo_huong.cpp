#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1001];
int truyVet[1001];
bool vs[1001];

void BFS(int i,int end){
    queue<int> q;
    q.push(i);
    vs[i]=true;
    while(q.size()>0){
        int u=q.front(); q.pop();
        for(int j=0;j<ke[u].size();j++)
            if(vs[ke[u][j]]==false){
                vs[ke[u][j]]=true;
                q.push(ke[u][j]);
                truyVet[ke[u][j]]=u;
                if(ke[u][j]==end) return;
            }
    }
}
void in(int st,int end){
    if(vs[end]==false){
        cout<<-1<<endl;
        return;
    }
    vector<int> res;
    while(st!=end){
         res.push_back(end);
         end=truyVet[end];
    }
    res.push_back(end);
    for(int i=res.size()-1;i>=0;i--)
        cout<<res[i]<<' ';
    cout<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        for(int i=1;i<1001;i++) ke[i].clear();
        memset(vs,false,sizeof(vs));
        int start,end,dinh,canh;
        cin>>dinh>>canh>>start>>end;
        while(canh--){
            int x,y;cin>>x>>y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        BFS(start,end);
        in(start,end);
    }
}