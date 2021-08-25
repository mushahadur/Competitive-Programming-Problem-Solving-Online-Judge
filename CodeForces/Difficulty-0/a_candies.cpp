#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,mud,mud2;
    cin >> n >> m;
    if((n%m)==0)
    {
        mud = n/m;
        for(i=0; i<m; i++)
        {
            cout<< mud << ' ';
        }
    }
    else
    {
        mud2 = n%m;
        mud = (n-mud2)/(m-1);
        cout << mud2 << ' ';
        for(i=0; i<m-1; i++)
        {
           cout<< mud << ' ';
        }
    }

    return 0;
}
