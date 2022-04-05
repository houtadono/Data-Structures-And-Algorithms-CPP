#include<bits/stdc++.h>
using namespace std;
int res;
vector<string> a;
struct dta{
    string str;
    int dem;
};

int check(string a,string b){
    int dem=0, i=0;
    while(i<a.size()){
        if(a[i]!=b[i]) dem++;
        if(dem==2) return 0;
        i++;
    }
    return dem==1;
}
int check1(string a,string b){
    int i=0,n=a.size();
    while(i<n){
        if(a[i]!=b[i]) break;
        i++;
    }
    i++;
    return a.substr(i,n-i)==b.substr(i,n-i);
}
void solve(string u,string v){    
    queue<dta> q;
    q.push({u,1});
    while(q.size()){
        dta tmp=q.front();q.pop();
        if(tmp.str==v){
            res=tmp.dem;
            return;
        }
        for(int i=0;i<a.size();i++){
            if(check(tmp.str,a[i])){
                q.push({a[i],tmp.dem+1});
                a.erase(a.begin()+i);
                i--;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        clock_t start, end;   
        double time_use;      
        start = clock();
        int n;cin>>n;
        string bd,kt; cin>>bd>>kt;
        for(int i=0;i<n;i++){
            string x; cin>>x;
            if(x!=bd) a.push_back(x);
        }
        solve(bd,kt);
        cout<<res<<endl;
        end = clock();
        time_use = (double)(end - start) / CLOCKS_PER_SEC;
        cout<<"Thoi gian chay: "<<time_use;
    }
    
}