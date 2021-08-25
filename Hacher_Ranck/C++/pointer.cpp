#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a, b,aa,bb,*pa,*pb;
    cin >> a>>b;
     pa = &a;
     pb = &b;
     cout << *pa+*pb <<endl;
     cout << abs(*pa-*pb) <<endl;

    return 0;
}
