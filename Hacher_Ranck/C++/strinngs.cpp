#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,len1;
    char aa[1000],bb[1000],t;
    cin>> aa>>bb;
    string a=aa ;
    string b=bb;
    string c = a+b;
    len = a.size();
    len1 = b.size();
    cout<<len<<" "<<len1<<endl;
    cout<<c<<endl;
    t=bb[0];
    bb[0] = aa[0];
    aa[0] = t;
    cout <<aa<<" "<<bb<<endl;
    return 0;
}
