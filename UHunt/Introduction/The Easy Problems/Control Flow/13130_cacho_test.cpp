#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum,i,j,arr[7],temp,c;
    cin >> t;
    while(t--)
    {
        c=0;
        for(i=0; i<5; i++)
        {
            cin>>arr[i];
            temp = arr[0];
            temp++;
            arr[i]++;
            if(arr[i]==temp)
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

