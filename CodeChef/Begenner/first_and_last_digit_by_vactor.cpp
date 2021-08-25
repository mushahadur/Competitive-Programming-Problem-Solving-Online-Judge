#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n;
	cin >> t;
	vector <int> v;
	while(t--)
    {
        cin >> n;
        v.push_back(n);
        v[0] = n%10;
        for(i=0; n !=0; i++)
        {
            v[i] = n%10;
            n = n/10;
        }
        cout << v[0]+v[i-1] << endl;
    }
	return 0;
}

