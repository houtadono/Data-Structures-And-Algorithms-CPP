#include<bits/stdc++.h>
using namespace std;
int n,k,a[101],x[101],c[101];
int Fopt=0,price=0,wig=0;
vector<int> res,tmp;

void ql(int i){
    for(int j=0;j<=1;j++){
        x[i]=j;
        price+=j*c[i];
        wig+=j*a[i];
        tmp.push_back(j);
        if(i==n){
            if(wig<=k)
                if(price>Fopt){
                    Fopt=price;
                    res=tmp;
                }
        }else ql(i+1);
        tmp.pop_back();
        price-=j*c[i];
        wig-=j*a[i];
    }
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>c[i];
    for(int i=1;i<=n;i++) cin>>a[i];
    ql(1);
    cout<<Fopt<<endl;
    for(int i=0;i<n;i++)
        cout<<res[i]<<' ';
}