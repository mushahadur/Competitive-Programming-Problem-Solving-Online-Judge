#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count,arr1[100000],arr2[100000],i;
    cin >> count;

        for(i=0; i<count; i++)
        {
            cin >> arr1[i];
        }
        for(i=0; i<count; i++){
        arr2[i] = arr1[count-i-1];
    }
        for(i=0; i<count; i++)
        {
            cout << arr2[i] <<" ";
        }

    return 0;
}
