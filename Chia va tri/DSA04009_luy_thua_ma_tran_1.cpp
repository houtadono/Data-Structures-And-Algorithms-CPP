#include <bits/stdc++.h>
using namespace std;
long long p=1e9+7;
long long b[11][11],k,n;

void mul(long long x[11][11], long long y[11][11]){
    long long tmp[11][11];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            long long res=0;
            for(int z=0;z<n;z++){
                res += (x[i][z]*y[z][j])%p;
                res%=p;
            }
            tmp[i][j]=res;
        }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            x[i][j]=tmp[i][j];
}

void pow(long long a[11][11], long long k){
    if(k<=1) return;
    pow(a,k/2);
    mul(a,a);
    if(k%2==1) mul(a,b);
}

void solve(){
    cin>>n>>k;
    long long a[11][11];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    pow(a,k);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
        
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve(); 
    return 0;
}