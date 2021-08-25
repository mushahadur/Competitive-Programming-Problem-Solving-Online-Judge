#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,r,i=0;
    cin >> t;
    while(t--)
    {
        cin >> n;
        while(n !=0)
        {
            r = n%10;
            if(r== 4)
            {
                i++;
            }
            n = n/10;
        }
        cout<<i<<endl;
        i=0;
    }
    return 0;
}
