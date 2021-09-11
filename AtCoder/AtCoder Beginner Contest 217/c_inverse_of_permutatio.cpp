#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int t,i,arr[200002];
    cin>>t;
    for(i=0; i<t; i++)cin>>arr[i];
    for(i=0; i<t; i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
