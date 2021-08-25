#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	long int n;
	cin >> t;
	vector <int> v;
	while(t--)
    {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    for(i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
	return 0;
}
