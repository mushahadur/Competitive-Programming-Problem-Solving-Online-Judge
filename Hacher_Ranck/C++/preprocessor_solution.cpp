
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	long int n,mi,ma;
	long long int result;
	cin >> t;
	vector <int> v;
	while(t--)
    {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());

    mi = v[0];
    reverse(v.begin(), v.end());
    ma = v[0];
    result = ma-mi;;
    printf("Result = %lld\n",result);
	return 0;
}
