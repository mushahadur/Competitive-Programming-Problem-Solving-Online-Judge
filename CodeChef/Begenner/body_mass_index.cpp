#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,h,temp;
    cin >> t;
    while(t--)
    {
        cin >> m >>h;
        temp = m/(h*h);
        if(temp<=18)
        {
            cout <<1<< endl;
        }
        else if(temp>=19 && temp<=24)
        {
            cout <<2<< endl;
        }
        else if(temp>=25 && temp<=29)
        {
            cout <<3<< endl;
        }
        else if(temp>=30)
        {
            cout <<4<< endl;
        }

    }
    return 0;
}
