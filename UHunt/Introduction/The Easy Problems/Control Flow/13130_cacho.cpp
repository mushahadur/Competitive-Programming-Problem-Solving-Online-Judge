#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum,i,j,arr[7],temp,c;
    cin >> t;
    while(t--)
    {
        for(i=0; i<5; i++)
        {
            cin>>arr[i];
        }
        temp = arr[0];
        c=0;
        for(j=0; j<5; j++)
        {
            temp++;
            arr[j]++;
            if(arr[j]==temp)
            {
              c++;
            }
        }
        if(c==5)
        {
            cout<<"Y"<<endl;
        }
        else
        {
           cout<<"N"<<endl;
        }
    }
    return 0;
}
