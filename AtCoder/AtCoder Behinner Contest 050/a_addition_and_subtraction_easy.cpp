#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b;
    string s;
    cin >> a >> s >> b;
    if(s== "+")
    {
        cout << a+b << endl;
    }
    else
    {
       cout << a-b << endl;
    }
    return 0;
}
