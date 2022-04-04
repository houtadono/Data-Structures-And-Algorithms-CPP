#include<bits/stdc++.h>
using namespace std;
vector<int > a[1001];
vector<pair<int, int> > res;
bool vs[1001];
int n;
void BFS(int u){
    vs[u]=true;
    queue<int> q;
    q.push(u);
    while(q.size()>0){
        int top=q.front();q.pop();
        for(int i=0;i<a[top].size();i++)
            if(vs[a[top][i]]==false){
                vs[a[top][i]] = true;
                q.push(a[top][i]);
            }
    }
}
int TPLT(){
    int dem=0;
    for(int i=1;i<=n;i++)
        if(vs[i]==false){
            BFS(i);
            dem++;
        }
    return dem;
}
void reset(){
    for(int i=1;i<1001;i++) a[i].clear();
    memset(vs,false,sizeof(vs));
}
void canh_cau(int truoc,int canh,vector<pair<int, int> > tmp){
    for(int i=0;i<tmp.size();i++){
        if(i!=canh){
            a[tmp[i].first].push_back(tmp[i].second);
            a[tmp[i].second].push_back(tmp[i].first);
        }
    }
    int dem=TPLT();
    if(dem>truoc){
        if(tmp[canh].first>tmp[canh].second) res.push_back({tmp[canh].second,tmp[canh].first});
        else res.push_back({tmp[canh].first,tmp[canh].second});
    }
}
void solve(){
    reset();
    res.clear();
    int canh;
    cin>>n>>canh;
    vector<pair<int, int> > tmp;
    while(canh--)
    {
        int c,b;cin>>b>>c;
        tmp.push_back({b,c});
        a[b].push_back(c);
        a[c].push_back(b);
    }
    int truoc=TPLT();
    for(int i=0;i<tmp.size();i++){
        reset();
        canh_cau(truoc,i,tmp);
    }
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++)
        cout<<res[i].first<<' '<<res[i].second<<' ';
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
}