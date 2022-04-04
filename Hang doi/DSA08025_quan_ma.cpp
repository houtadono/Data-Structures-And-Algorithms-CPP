#include <bits/stdc++.h>
using namespace std;
struct dta{
    char bd,kt;
    int dem;
};
int X[]={-1,-2,-2,-1,1,2,2,1};
int Y[]={-2,-1,1,2,2,1,-1,-2};

int result(char a1, char a2, char b1, char b2 ){
    queue<dta> q;
    q.push({a1,a2,0});
    while(q.size()){
        dta tmp=q.front();q.pop();
        if(tmp.bd==b1&&tmp.kt==b2) return tmp.dem;
        for(int i=0;i<8;i++){
            char x=X[i]+tmp.bd;
            char y=Y[i]+tmp.kt;
            if(x>='a'&&x<='h'&&y>'0'&&y<'9'){
                q.push({x,y,tmp.dem+1});
            }
        }
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<result(s1[0],s1[1],s2[0],s2[1])<<endl;
    }
    return 0;
}
