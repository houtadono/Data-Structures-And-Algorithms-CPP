#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int maxc=INT_MIN;
        int a[n],pos=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i<k&&a[i]>maxc) 
            {   
                maxc=a[i];
                pos=i;
            }
        }
        cout<<maxc<<' ';
        for(int i=k;i<n;i++)
        {
            if(a[i]>maxc)
            {
                maxc=a[i];
                pos=i;
            }
            if(a[i]<maxc&&i>=pos+k)
            {
                maxc=a[i];
                pos=i;
                for(int j=i-1;j>i-k;j--)
                {
                    if(maxc<a[j])
                    {
                        maxc=a[j];
                        pos=j;
                    }
                }
            }
            cout<<maxc<<' ';
        }
        cout<<endl;
    }
}
        