#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
int n,k;
vector< vector<int> > res;
void in()
{
    for(int i=res.size()-1;i>=0;i--)
    {
        cout<<"Buoc "<<i+1<<": ";
        for(int j=0;j<n;j++)
        {
            cout<<res[i][j]<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    cin>>n; vector<int> a;
    For(i,0,n)
    {
        int x;cin>>x;
        a.push_back(x);
    }
    For(i,0,n-1) 
    {
        int pos_min=i;
        For(j,i+1,n)
        {
            if(a[pos_min]>a[j])
                pos_min=j;
        }
            swap(a[i],a[pos_min]);
            res.push_back(a);
    }
    in();
}