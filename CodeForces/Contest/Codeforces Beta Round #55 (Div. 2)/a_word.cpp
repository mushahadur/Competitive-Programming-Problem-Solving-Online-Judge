#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int w, i, j, c_u=0,c_l=0;
    string str;
    cin>>str;
    w = str.size();
    for(i=0; i<w; i++)
    {
        if(str[i]>96)
        {
            c_l++;
        }
        else
        {
            c_u++;
        }
    }
    for(j=0; j<w; j++)
    {
        if(c_l >= c_u)
        {
            str[j]=tolower(str[j]);
        }
        else
        {
            str[j]=toupper(str[j]);
        }
    }
    cout << str<<endl;
    return 0;
}

