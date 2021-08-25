///  Runtime Error ..
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i=0,c=0;
    long int a[100002];
    cin>>n>>k;
    while(cin>>a[i] && n--)
    {
        if((a[i]%k) ==0)
        {
            c++;
        }
        if(n==0)
        {
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
