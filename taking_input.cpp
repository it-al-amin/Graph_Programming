#include<bits/stdc++.h>
#define EMPTY_VALUE -1
using namespace std;
int main()
{
    int node,edge;
    cin>>node>>edge;
    int i,j,a[node+1][edge+1],cost,p,q;
    for(int i=1; i<=node; i++)
        for(int j=1; j<=edge; j++)
            scanf("%d",&a[i][j]);
    for(int i=1; i<=node; i++){
        for(int j=1; j<=edge; j++)
            printf("%d ",a[i][j]);
    printf("\n");
    }
    int Node,Edge;
//int matrix[100][100];
//scanf("%d%d",&Node,&Edge);
//for(i=0;i<Edge;i++)
//{
//int n1,n2,cost;
//scanf("%d%d%d",&n1,&n2,&cost);
//matrix[n1][n2]=cost;
//matrix[n2][n1]=cost;
//}
}
