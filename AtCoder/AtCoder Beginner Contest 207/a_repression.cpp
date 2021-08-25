#include<iostream>
using namespace std;
int main()
{
    int a,b,c,ma2,maximam,sum;
    cin >> a>> b >>c;
    if(a>=b && a>=c)
    {
        maximam = a;
        ma2 = max(c,b);
    }
    else if (b>=a && b>=c)
    {
        maximam = b;
        ma2 = max(a,c);
    }
    else if (c>=a && c>=b)
    {
        maximam = c;
        ma2 = max(a,b);
    }
    sum =maximam+ma2;
    cout << sum <<"\n";

    return 0;
}

