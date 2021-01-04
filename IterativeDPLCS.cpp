#include<bits/stdc++.h>
# define MAX_N 20
using namespace std;
int mem[MAX_N][MAX_N];
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n,m,i,j;
        n=text1.size();
        m=text2.size();
        for(i=0;i<n;i++)
            mem[i][m]=0;
        for(i=0;i<m;i++)
            mem[n][i]=0;
        for(i=n-1;i>=0;i--)
        {
            for(j=m-1;j>=0;j--)
            {
                if(text1[i]==text2[j])
                    mem[i][j]=1+mem[i+1][j+1];
                else
                    mem[i][j]=max(mem[i+1][j],mem[i][j+1]);


                }
        }
        return mem[0][0];
    }
};
int main(void)
{
    Solution sv;
    string x,y;
    cin>>x>>y;
    cout<< Solution().longestCommonSubsequence(x,y)<<endl;
}
