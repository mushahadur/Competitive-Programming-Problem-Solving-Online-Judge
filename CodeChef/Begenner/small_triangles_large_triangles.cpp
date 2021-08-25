/// incomplite//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[111],b[111],c[111],s[111],j,i,p,ss;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        p = (a[i]+b[i]+c[i])/2;
        ss = p*(p-a[i])*(p-b[i])*(p-c[i]);
        s[i]=sqrt(ss);  /// result = sqrt(x);
        cout << s[i] << endl;
    }
    //int n = sizeof(s) / sizeof(s[0]);
    sort(s, s+t);
    for(i=0; i<t; ++i)
    {
        cout << s[i] << endl;
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }
/*
    for(j=1; j=<t; j++)
    {
        cout << a[j] << b[j] << c[j] << endl;
    }
*/

    return 0;
}

