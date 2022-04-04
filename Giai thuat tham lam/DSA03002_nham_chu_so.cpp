#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int a1=0,a2=0;
    for(int i=0;i<s1.size();i++)
    {
        int c=s1[i]-'0';
        if(c==6) c=5;
        a1=a1*10+c;
        if(c==5) c=6;
        a2=a2*10+c;
    }
    int b1=0,b2=0;
    for(int i=0;i<s2.size();i++)
    {
        int c=s2[i]-'0';
        if(c==6) c=5;
        b1=b1*10+c;
        if(c==5) c=6;
        b2=b2*10+c;
    }
    cout<<a1+b1<<' '<<a2+b2;
}