#include<bits/stdc++.h>
using namespace std;
string xuly(int n){
    queue<string> q;
    q.push("1");
    while(q.size()>0){
        string res=q.front();q.pop();
        long long tmp=0;
        for(int i=0;i<res.size();i++){
            tmp=tmp*10+ (res[i]-'0');
            tmp%=n;
        }
        if(tmp==0) 
            return res;
        q.push(res+"0");
        q.push(res+"1");
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<xuly(n)<<endl;
    }
}