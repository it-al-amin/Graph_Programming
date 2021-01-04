#include<bits/stdc++.h>
#define MAX_N 20
//#define EMPTY_VALUE -1
using namespace std;
int mem[MAX_N][MAX_N];
int Iterativelcs(string x,string y)
{
    int p,q,i,j;
    p=x.size();
    q=y.size();
    for(i=0;i<p;i++)
        mem[i][q]=0;
     for(i=0;i<q;i++)
        mem[p][i]=0;
    for(i=p-1;i>=0;i--)
    {
        for(j=q-1;j>=0;j--)
        {
            if(x[i]==y[j])
            {
                mem[i][j]=1+mem[i-1][j-1];
            }
            else
            {
                mem[i][j]=max(mem[i-1][j],mem[i][j-1]);
            }
        }
    }
    return mem[0][0];

}
int main()
{
    while(1)
    {
        string x,y;
        cin>>x>>y;
        if(x=="0"||y=="0")
            break;
        //memset(mem,EMPTY_VALUE,sizeof(mem));
        cout<<Iterativelcs(x,y)<<endl;
    }
}
