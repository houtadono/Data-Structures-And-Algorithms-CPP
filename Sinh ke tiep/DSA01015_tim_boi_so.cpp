#include<bits/stdc++.h>
using namespace std;
long long res[501];
bool visited[501];
void boiso()
{
    int dem=0;
    queue<long long> q;
    q.push(9);
    while(dem<500){
        long long top=q.front(); q.pop();
        for(int i=1;i<=500;i++)
            if(!visited[i]&&top%i==0){
                visited[i]=true;
                res[i]=top;
                dem++;
            }
        q.push(top*10);
        q.push(top*10+9); 
    }
}
int main()
{  
    boiso();
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<res[n]<<endl;
    }
}
        