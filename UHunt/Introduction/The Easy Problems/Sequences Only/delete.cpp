/// 11614 Etruscan Warriors Never Play Chess
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,n,m,k,i;
    cin>>k;
    for(i=0; i<k; i++)
    {
        cout<<"Number : ";
        cin>>n;
        m=(1+8*n)-1;
        x=sqrt(m)/2;
        cout<<n<<" :- "<<x<<endl;
    }
    return 0;
}
