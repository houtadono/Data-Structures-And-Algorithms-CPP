#include <bits/stdc++.h>
using namespace std;

struct cv{
    int x,y;
};

bool cmp(cv a,cv b){
    if(a.y<b.y) return true;
    if(a.y>b.y) return false;
    if(a.x<b.x) return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cv p[n];
        for(int i=0;i<n;i++) cin>>p[i].x;
        for(int i=0;i<n;i++) cin>>p[i].y;
        sort(p,p+n,cmp);
        int res=1,kt = p[0].y;
        for(int i=1;i<n;i++){
            if(p[i].x>=kt){
                res++;
                kt=p[i].y;
            }
        }
        cout<<res<<endl;
    }
}