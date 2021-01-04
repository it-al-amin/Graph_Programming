#include<bits/stdc++.h>
#define EMPTY_VALUE -1
#define MAX_N 20
using namespace std;
int mem[MAX_N+1][MAX_N+1];
int lcs(string x,string y)
{

    int p,q,i,j;
    p=x.size();
    q=y.size();
    for(i=0; i<p; i++)
        mem[i][q]=0;
    for(i=0; i<q; i++)
        mem[p][i]=0;
    for(i=q-1; i>=0; i--)
    {
        for(j=p-1; j>=0; j--)
        {
            if(y[i]==x[j])
            {
                mem[i][j]=1+mem[i+1][j+1];
            }
            else
            {
                mem[i][j]=max(mem[i+1][j],mem[i][j+1]);

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

        int p,q,r;
        p=x.size()-lcs(x,y);//deletions
        q=y.size()-lcs(x,y);//insertions

        if(x.size()==y.size())
            cout<<min(p,q)<<endl;
       else if(x.size()>y.size())
       {
           cout<<x.size()-y.size()+min(p,q);//changing,deleting,inserting;
       }
       else{
        cout<<y.size()-x.size()+min(p,q);//changing,deleting,inserting;
       }
    }
}

