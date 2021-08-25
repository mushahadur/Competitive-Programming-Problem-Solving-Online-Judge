#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,arr[100000];
    cin >> t;
    while(t--)
    {
        cin >> n;
        arr[0] = n%10;
        for(i=0; n !=0; i++)
        {
            arr[i] = n%10;
            n = n/10;
        }
        cout << arr[0]+arr[i-1] << endl;
    }
    return 0;
}
