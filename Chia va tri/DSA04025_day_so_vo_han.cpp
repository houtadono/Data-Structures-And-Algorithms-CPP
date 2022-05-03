#include <bits/stdc++.h>
using namespace std;
long long p=1e9+7;
long long b[2][2]={ 1 ,1, 1, 0},k,n=2;

void mul(long long x[2][2], long long y[2][2]){
    long long tmp[2][2];
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

void pow(long long a[2][2], long long k){
    if(k<=1) return;
    pow(a,k/2);
    mul(a,a);
    if(k%2==1) mul(a,b);
}

void solve(){
    cin>>k;
    long long a[2][2]={ 1 ,1, 1, 0}; 
    pow(a,k-1);
    cout<<a[0][0]<<endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve(); 
    return 0;
}