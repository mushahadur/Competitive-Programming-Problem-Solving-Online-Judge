#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[100],t,b[100],c[100],i=0,result[100];

   cin >> t;
   while(t--)
   {
       cin >>a[i] >>b[i] >>c[ i];
       result[i] = (a[i]+b[i]+c[i])/2;
       cout<<result[i]<<endl;

       i++;
   }

   sort(result,result+t);
   for(i=0;i<t; i++)
   {
     cout <<result[i] <<endl;
   }

   return 0;
}
