#include <bits/stdc++.h>
using namespace std;
/*
vector<int> parseInts(string str) {
	while(Enter = true)
    {
        cin >> str;
        integers.push_back(str);
    }
}
*/
int main() {
    string str;
    cin >> str;
    vector<int> integers;
    while(str = '\0')
    {
       cin >> str;
        integers.push_back(str);
    }
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
