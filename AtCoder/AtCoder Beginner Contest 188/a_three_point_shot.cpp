#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a>>b;
    if(a!=b)
    {
        if(a+3 > b)
        {
            cout << "Yes"<<endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
