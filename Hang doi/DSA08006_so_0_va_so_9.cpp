#include<bits/stdc++.h>
using namespace std;
int res[101];
bool vs[101];
void xuly(){
    queue<int> q;
    q.push(9);
    int dem=0;
    while(dem<100){
        int top=q.front();q.pop();
        for(int i=1;i<101;i++)
            if(vs[i]==false&&top%i==0){
                vs[i]=true;
                res[i]=top;
                dem++;
            }
        q.push(top*10);
        q.push(top*10+9);
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    xuly();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<res[n]<<endl;
    }
}