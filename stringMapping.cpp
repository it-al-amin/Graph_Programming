#include<bits/stdc++.h>
# define n 5
using namespace std;

/*
int * myFunction() {

// return an function without any argument..by using pointer;
   .
   .
   .
}

*/
int *fun()
{
    int i,ans=0;
    map<string,int>mp;
    //cin>>n;
    int k=0;
    static int  a[2*n+1];
    /*have to declare as static as ..
    Second point to remember is that C++ does not advocate to return
     the address of a local variable to outside of the function
    so you would have to define the local variable as static variable.

    */

   // set the seed
   srand( (unsigned)time( NULL ) );
    string s1,s2;
    for(i=0; i<n; i++)
    {
        cin>>s1>>s2;
        if(mp.find(s1)==mp.end())
        {

            cout<<" Mapping  "<<s1<<" with "<<ans<<endl;
            mp[s1]=ans++;
        }
        a[k++]=mp[s1];
        if(mp.find(s2)==mp.end())
        {

            cout<<" Mapping "<<s2<<" with "<<ans<<endl;
            mp[s2]=ans++;
        }
        a[k++]=mp[s2];

    }
    return a;

}
int main()
{
    int i;


    int *a=fun();
    for(i=0; i<2*n; i++)
        cout<<a[i]<<" ";
    cout<<endl;


}
/*
int main() {
    vector< int > v, t;
    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 4 );

    t = v; // copying
    for(int i=0; i<t.size(); i++) cout << t[i] << endl;

    return 0;
}

*/
