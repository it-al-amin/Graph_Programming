#include<bits/stdc++.h>
#define EMPTY_VALUE -1
#define MAX_N 20
#define INF 99999999
using namespace std;
int n,c[100001],mem[MAX_N][MAX_N];
int make(int i,int w)
{
  if(w<0)
        return INF;
  if(i==n)
  {
      if(w==0)
        return 0;
      return INF;
  }
  if(mem[i][w]!=EMPTY_VALUE)
    return mem[i][w];
  int res1=1+make(i+1,w-c[i]);
  int res2=make(i+1,w);
  return mem[i][w]=min(res1,res2);
}

int main()
{
    cin>>n;
    int w,i;
    for(i=0;i<n;i++)
        cin>>c[i];
    cin>>w;
    memset(mem, EMPTY_VALUE,sizeof(mem));
    cout<<make(0,w)<<endl;

}
