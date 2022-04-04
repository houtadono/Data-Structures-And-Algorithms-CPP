#include<bits/stdc++.h>
using namespace std;
int n,sum,a[21],kt;
vector<int> tmp;
void ql(int i){
    for(int j=i;j<=n;j++){
        sum-=a[j];
        tmp.push_back(a[j]);
        if(sum==0){
            kt=0;
            cout<<'[';
            for(int p=0;p<tmp.size();p++){
                cout<<tmp[p];
                if(p<tmp.size()-1) cout<<' ';
            }
            cout<<']';
        }
        else if(sum>0) ql(j);
        tmp.pop_back();
        sum+=a[j];
    }
}

int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n>>sum;
        kt=1;
        for(int i=1;i<=n;i++) cin>>a[i];
        ql(1);
        if(kt) cout<<-1;
        cout<<endl;
    }
}