#include<bits/stdc++.h>
using namespace std;
int a[10005],pt=0;
set<int> to_set(int n){
    set<int> s;
    while(n){
        s.insert(n%10);
        n/=10;
    }
    return s;
}

void sang(){
    queue<int> q;
    for(int i=1;i<6;i++)q.push(i);
    a[pt++]=0;
    while(q.size()){
        int tmp=q.front();q.pop();
        a[pt++]= tmp;
        set<int> s= to_set(tmp);
        for(int i=0;i<6;i++)
            if(s.find(i)==s.end()){
                q.push(tmp*10+i);
            }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    sang();
    int t; cin>>t;
    while(t--){
        int m,n; cin>>m>>n;
        int i=0;
        while(a[i]<m) i++;
        int j=i;
        while(a[i]<=n)i++;
        cout<<i-j<<endl;
    }
}