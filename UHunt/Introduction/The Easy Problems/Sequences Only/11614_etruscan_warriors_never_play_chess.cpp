#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,c;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0)
        {
            c=0;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<i+1; j++)
                {
                    c++;
                }
            }
            cout<<c<<endl;
        }

    }

    return 0;
}
