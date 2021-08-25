#include <bits/stdc++.h>
using namespace std;
int main()
{
 short int t,a,b,c,r=0;
   cin>>t;
   while(t--)
   {
       cin>>a>>b>>c;
       if(a+b+c>1)r++;
   }
   cout<<r<<endl;

    return 0;
}
