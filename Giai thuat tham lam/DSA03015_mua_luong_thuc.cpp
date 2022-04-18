#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n,s,m; cin>>n>>s>>m;
        // s - s/7: so ngay co the mua luong thuc
        // s*m : so luong thuc can de ton tai
        if(s*m>(s-s/7)*n) cout<<-1<<endl;
        else{
            for(int i=1;i<=(s-s/7);i++){
                if(n*i>=s*m){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}