#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin >> t;
    while(t--)
    {
        cin >>n;
        if(n==2)
        {
            cout << "same" << endl;
        }
        else if(n%2==0)
        {
            cout << "even" << endl;
        }
        else if(n%2== !0)
        {
            cout << "odd" << endl;
        }

    }

    return 0;
}
