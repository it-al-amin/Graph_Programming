#include<bits/stdc++.h>
# define EMPTY_VALUE -1
#define MAX_N 20
using namespace std;
int mem[MAX_N][MAX_N];
int LCS(int i,int j,string &x,string &y)
{
    if(i==x.size()||j==y.size())
        return 0;
    if(mem[i][j]!=EMPTY_VALUE)
        return mem[i][j];
    int ans=0;
    if(x[i]==y[i])
        ans=1+LCS(i+1,j+1,x,y);
    else
    {
        ans=max(LCS(i+1,j,x,y),LCS(i,j+1,x,y));
    }
    return mem[i][j]=ans;

}
int main()
{
    string x,y;
    cin>>x>>y;
    memset(mem,EMPTY_VALUE,sizeof(mem));
    cout<<LCS(0,0,x,y)<<endl;
}

