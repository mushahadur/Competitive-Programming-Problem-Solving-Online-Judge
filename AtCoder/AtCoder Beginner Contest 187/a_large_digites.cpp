#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,sum1=0,r,r1,result;
    cin >>a>>b;
    while(a !=0)
    {
        r = a%10;
        sum = sum+r;
        a = a/10;
    }

    while(b !=0)
    {
        r1 = b%10;
        sum1 = sum1+r1;
        b = b/10;
    }
    result = max(sum,sum1);
    cout << result << endl;

    return 0;
}
