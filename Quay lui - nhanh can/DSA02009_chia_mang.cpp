#include <bits/stdc++.h>
using namespace std;
int n,k,a[21],vs[21],res;

void ql(int sum,int dem){
    if(res) return;
    for(int i=1;i<=n;i++){ 
        if(vs[i]==0){
            sum+=a[i];
            vs[i]=1;
            if(sum==k) sum=0;
            if(dem==n){
                if(sum==0) res=1;
                return;
            }else if(sum<k) ql(sum,dem+1);
            if(sum!=k){
                vs[i]=0;
                sum-=a[i];
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        cin>>n>>k; res=0;
        int sum=0;
        memset(vs,0,sizeof(vs));
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%k!=0) cout<<0<<endl;
        else{
            k=sum/k;
            ql(0,1);
            cout<<res<<endl;
        }
    }
    return 0;
}