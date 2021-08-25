#include<bits/stdc++.h>
using namespace std;
int max_of_four(int a, int b, int c, int d);
int main()
{
    int a,b,c,d,ans;
    cin >> a >> b >> c >> d;
    ans = max_of_four(a, b, c, d);
    cout << ans << endl;

    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    int largest= (a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
    return largest;
}

 ///largest= (a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
