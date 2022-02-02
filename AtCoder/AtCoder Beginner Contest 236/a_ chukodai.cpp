#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char key;
    int num1,num2;
    cin>>str;
    cin>>num1>>num2;
    key = str[num1-1];
    str[num1-1]=str[num2-1];
    str[num2-1]=key;
    cout<<str<<endl;

    return 0;
}
