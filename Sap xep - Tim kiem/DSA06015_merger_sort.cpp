#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)

void mergee(int a[],int l,int m,int h)
{
    int n1=m-l+1;
    int n2=h-m;
    int L[n1], R[n2];
    For(i,0,n1) L[i]=a[l+i];
    For(i,0,n2) R[i]=a[m+i+1];
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;        
    }
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
}   
void merge_sortt(int a[],int l,int h)
{
    if(l<h){
        int m= l +(h-l)/2;
        merge_sortt(a,l,m);
        merge_sortt(a,m+1,h);
        mergee(a,l,m,h);
    }
}

void solve()
{
    int n;
    cin>>n; int a[n];
    For(i,0,n) cin>>a[i];
    merge_sortt(a,0,n-1);
    For(i,0,n) cout<<a[i]<<' ';
    cout<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}