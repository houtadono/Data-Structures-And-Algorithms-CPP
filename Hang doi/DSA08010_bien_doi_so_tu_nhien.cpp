#include<bits/stdc++.h>
using namespace std;
struct ptinh{
    int val,dem;
};
int xuly(int a){
    queue<ptinh> q;
    q.push({a,0});
    set<int> s;
    s.insert(a);
    while(q.size()>0){
        ptinh tmp= q.front(); q.pop();
        if(tmp.val==1) return tmp.dem;
        if(tmp.val-1==1) return tmp.dem+1;
        for(int i=2;i*i<=tmp.val;i++)
            if(tmp.val%i==0)
                if(s.find(tmp.val/i)==s.end()){
                    q.push({tmp.val/i,tmp.dem+1});
                    s.insert(tmp.val/i);
                }
        if(s.find(tmp.val-1)==s.end()&&tmp.val>1){
            q.push({tmp.val-1,tmp.dem+1});
            s.insert(tmp.val-1);
        }
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;cin>>t;
    while(t--){
        int a;cin>>a;
        cout<<xuly(a)<<endl;
    }
}