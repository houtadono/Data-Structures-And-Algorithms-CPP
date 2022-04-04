#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int m,n,k;
        cin>>n>>m>>k;
        int a[n+m+1],L[n],R[m];
        for(int i=0;i<n;i++) cin>>L[i];
        for(int j=0;j<m;j++) cin>>R[j];
        int i=0,j=0,pt=1;
        int kt=0;
        while(i<n&&j<m)
        {
            if(L[i]<=R[j])
            {
                a[pt]=L[i];
                if(k==pt) {kt=1;break;}
                i++;
            }
            else
            {
                a[pt]=R[j];
                if(k==pt) {kt=1;break;}
                j++;
            }
            pt++;
        }
        if(!kt)
        {
            while(i<n)
            {
                a[pt]=L[i];
                if(k==pt) {kt=1;break;}
                pt++;
                i++;
            }
            while(j<m&&!kt)
            {
                a[pt]=R[j];
                if(k==pt) {kt=1;break;}
                pt++;
                j++;
            }
        }
        cout<<a[pt]<<endl;
    }
}
        