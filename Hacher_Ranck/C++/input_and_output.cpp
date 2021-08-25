#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,sum=0,c=1;
    while(cin>>n && c<3)
    {
        sum = sum+n;
        c += 1;
    }
    sum = sum+n;
    cout << sum << endl;
    return 0;
}
