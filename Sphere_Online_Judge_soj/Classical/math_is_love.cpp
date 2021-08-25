#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int y,sum=0,i,arr[100],arry[1000];
    for(i=0; i<10; i++)
    {
        sum=sum+i;
        arr[i]=sum;
        arry[sum]=i;
    }
    cout<<"check   : "<<arr[6]<<endl;
    cout<<"check 2  : "<<arry[21]<<endl;
    cin>>t;
    while(t--)
    {
        cin>>y;
        if(arry[y]!=0){
        cout<<arry[y]<<endl;
        }
        else
        {
          cout<<"NUL"<<endl;
        }
    }

    return 0;
}
