#include<bits/stdc++.h>
#define EMPTY_VALUE -1
#define MAX_N 20
using namespace std;
int mem[MAX_N+1][MAX_N+1];
int lcs(int i,int j,string &x,string &y)
{
    if(i==x.size()||j==y.size())
       return 0;
    if(mem[i][j]!=EMPTY_VALUE)
        return mem[i][j];
    int ans=0;
    if(x[i]==y[j])
    {
        ans=1+lcs(i+1,j+1,x,y);
    }
    else
    {
        ans=max(lcs(i,j+1,x,y),lcs(i+1,j,x,y));

    }
    return mem[i][j]=ans;
}
int main()
{
    while(1)
    {
        string x,y;
        cin>>x>>y;
        if(x=="0"||y=="0")
            break;
        memset(mem,EMPTY_VALUE,sizeof(mem));
        cout<<lcs(0,0,x,y)<<endl;
    }
}
