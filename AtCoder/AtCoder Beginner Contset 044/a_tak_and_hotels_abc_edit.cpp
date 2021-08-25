#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,y,sum;
    cin >>n >>k >>x >>y;
    if(k<=n)
    {
       sum = (x*k)+(y*(n-k));
       cout<<sum<<endl;
    }
    else
    {
       sum = n*x;
       cout<<sum<<endl;
    }

    return 0;
}
