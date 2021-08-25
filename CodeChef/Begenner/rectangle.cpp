#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if((a==b && c==d) ||(a==c && b==d) || (a==d && c==b))
        {
            cout << "Yes" <<endl;
        }
        else{
          cout << "No" <<endl;
        }
    }
    return 0;
}
