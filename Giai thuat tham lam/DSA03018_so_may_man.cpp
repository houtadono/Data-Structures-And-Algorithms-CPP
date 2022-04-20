#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int kt=1,i4;
        for(i4=0;i4<=n/7;i4++){
            if((n-i4*4)%7==0){
                kt=0;
                break;
            }
        }
        if(kt) cout<<-1<<endl;
        else{
            int i7=(n-i4*4)/7;
            while(i4--) cout<<4;
            while(i7--) cout<<7;
            cout<<endl;
        }
    }
}