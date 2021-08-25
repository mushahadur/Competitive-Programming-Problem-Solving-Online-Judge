#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int i=0;
    while(str[i] !='\0')
    {
        if(str[i]==',')
        {
            str[i] = ' ';
        }
        i++;
    }
    cout << str<<endl;
    return 0;
}


