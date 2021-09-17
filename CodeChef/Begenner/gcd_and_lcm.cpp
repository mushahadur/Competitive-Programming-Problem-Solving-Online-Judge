/// Time limit excessed :(

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int n1,n2,i,t;
    cin>>t;
    while(t--){
    long int gcd=1, lcm=1;
    cin >> n1 >> n2;
    for ( i=1; i<1000000; i++){
        if ((n1%i == 0) && (n2%i == 0))gcd = i;
    }
    lcm = (n1 * n2) / gcd;
    cout << gcd<<" "<<lcm<<endl;
    }
    return 0;
}
