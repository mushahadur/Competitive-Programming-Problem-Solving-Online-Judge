#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, x,i, y,d,sum=0,sum1=0;
    cin >> n >>a >>x >>y;
    d = n-a;
    if(d==0)
    {
        for(i=0; i<n; i++)
        {
            sum = sum+x;
        }
    }
    else
    {
       for(i=0; i<a; i++)
        {
            sum = sum+x;
        }
        for(i=0; i<d; i++)
        {
            sum1 = sum1+y;
        }
    }
    cout << sum+sum1 << endl;

    return 0;
}
