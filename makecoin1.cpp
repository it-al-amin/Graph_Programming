#include<bits/stdc++.h>
#define EMPTY_VALUE -1
#define MAX_N 20
#define INF 99999999
using namespace std;
int c[100001],mem[MAX_N][MAX_N];
int make(int i,int w,int n)
{
  if(w<0)
        return INF;
  if(i==n)
  {
      if(w==0)
        return 0;
      return INF;
  }

    return mem[i][w];
}
int cal(int n,int target){
    for(int i=n-1;i>=0;i--)
    {
          for (int w = 0; w <= target; w++) {

            int res_1 = 1 + make(i + 1, w - c[i], n);
            int res_2 = make(i + 1, w, n);
            mem[i][w] = min(res_1, res_2);
        }
    }
    return mem[0][target];
}

int main()
{
    int n;
    cin>>n;
    int w,i;
    for(i=0;i<n;i++)
        cin>>c[i];
    cin>>w;
    memset(mem, EMPTY_VALUE,sizeof(mem));
    cout<<cal(n,w)<<endl;

}

