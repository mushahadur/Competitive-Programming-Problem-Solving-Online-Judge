#include<bits/stdc++.h>
using namespace std;

int summing(int num)
{
    int r,i=10,sum;
    while(i>9)
    {
        sum =0;
        while(num !=0)
        {
            r = num%10;
            sum = sum+r;
            num = num/10;
        }
        num = sum;
        i=num;
    }

    return num;
}
int main()
{
    long int n;
    int result;
    while(scanf("%ld",&n) && n!=0)
    {
        if (10<=n)
        {
            result = summing(n);
            cout << result << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}
