#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll *call(ll a[],int n)
{

    ll k=0,ans=0,compress=0,i,x,c[n];
    map<int,ll>mp;
    for(i=0;i<n;i++)
    {
        x=a[i];

        if(mp.find(x)==mp.end())
        {
            mp[x]=ans;
           //mp[a[i]]++;
           cout<<"compressed value is "<<x<<" with "<<ans<<endl;
           ans++;
        }

        c[k++]=mp[x];
    }

    return c;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n],i,k;
    for(i=0;i<n;i++)
        cin>>a[i];
       // vector<ll>v;
    ll* p;
   p= call(a,n);
   for(i=0;i<n;i++)
   {
       cout << "*(p + " << i << ") : ";
      cout <<p[i]<< endl;
   }
   cout<<endl;
}
