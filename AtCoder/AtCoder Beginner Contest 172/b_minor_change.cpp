#include<bits/stdc++.h>
using namespace std;
int main()
{
   int j,c=0,k=0,s_arr[1000],t_arr[1000];
   string s,t;
   cin>>s>>t;
   for(auto i:s){
    s_arr[k] = i;
    cout<<s_arr[k]<<" ";
    k++;
   }
   cout<<endl;
    for(auto b:t){
    t_arr[k] = b;
    cout<<t_arr[k]<<" ";
    k++;
   }
   cout<<(s.size())<<endl;
   for(j=0; j<s.size(); j++){
    if(s_arr[j] != t_arr[j]){
            c++;
            cout<<"c Print : "<<c;
    }
   }

   cout<<c<<endl;

    return 0;
}
