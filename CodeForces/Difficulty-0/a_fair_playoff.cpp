#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d,max_1st_num,min_1st_num,max_2nd_num,min_2nd_num;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        max_1st_num = max( a, b);
        min_1st_num = min( a, b);
        max_2nd_num = max(c,d);
        min_2nd_num = min(c,d);

        if(max_1st_num>min_2nd_num && max_2nd_num>min_1st_num)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
