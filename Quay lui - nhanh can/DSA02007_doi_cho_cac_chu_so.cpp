#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        for(int i=0;i<s.size();i++)
        {
            int pos=s.size()-1;
            char max=s[pos];
            for(int j=s.size();j>i&&n>0;j--)
            {
                if(s[j]>max)
                {
                    max=s[j];
                    pos=j;
                }
            }
            if(max>s[i]&&n>0)
            {
                n--;
                swap(s[i],s[pos]);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
        