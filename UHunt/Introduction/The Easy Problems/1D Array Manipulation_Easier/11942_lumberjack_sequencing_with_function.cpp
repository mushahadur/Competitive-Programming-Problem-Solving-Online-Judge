#include<bits/stdc++.h>
using namespace std;
int check(int arr[]);

int main()
{
    int t,arr[100],i,r;
    cin >>t;
    cout <<"Lumberjacks:"<<endl;
    while(t--)
    {
        for (i=0; i<10; i++)
        {
            cin >> arr[i];
        }

        r = check(arr);

        if (r==1 || r==2)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;


    }
    return 0;
}
int check(int arr[])
{
    int a = 1, d = 1, i = 0;

    while ((a==1 || d==1) && i<10-1)
    {
        if (arr[i] < arr[i+1])
            d = 0;
        else if (arr[i] > arr[i+1])
            a = 0;
        i++;
    }

    if (a == 1)
        return 1;
    else if (d == 1)
        return 2;
    else
        return 0;
}

