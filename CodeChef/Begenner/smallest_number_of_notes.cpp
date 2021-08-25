#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,r;
    int h[] = {1,2,5,10,50,100};
    cin >>t;
    while(t--)
    {
      cin >> n;
      r=0;
      for(i=5; i>=0;i--)
      {
          r+=n/h[i];
          n%=h[i];
      }
      cout << r <<endl;
    }
    return 0;
}
