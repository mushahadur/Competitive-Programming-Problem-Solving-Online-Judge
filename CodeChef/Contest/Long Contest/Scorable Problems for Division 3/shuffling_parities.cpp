#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
    optimize();

    int t,n,arr[100000];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int j=1; j<=n;j++){
                int temp = j;
            if(arr[j]%2=!0){
                j+=2;
            }
            else{
               j+=2;
            }
        }

    }


    return 0;
}

