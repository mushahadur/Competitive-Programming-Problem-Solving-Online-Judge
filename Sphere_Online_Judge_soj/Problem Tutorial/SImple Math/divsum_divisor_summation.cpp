#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum=0,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<n<<endl;
        }
        else
        {
            for(i=1; i<n; i++)
            {
                if(n%i==0)
                {
                    sum = sum+i;
                }
            }
            cout<<sum<<endl;
            sum=0;
        }
    }
    return 0;
}
