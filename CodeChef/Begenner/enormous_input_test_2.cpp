///  Runtime Error ..
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,c=0;
    long int a[100002];
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(j=0; j<n; j++)
    {
        if((a[j]%k) ==0)
        {
            c++;
        }
    }

    cout<<c<<endl;
    return 0;
}

