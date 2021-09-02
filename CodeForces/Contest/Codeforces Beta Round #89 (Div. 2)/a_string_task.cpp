#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;

/// A. String Task ^^ https://codeforces.com/contest/118/problem/A

bool isVowel(char c)
{
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y');
}
int main()
{
    optimize();

    string s,ans;
    cin>>s;
    for(auto i:s)
    {
        char c = tolower(i);
        if(!isVowel(c))
        {
            ans +='.';
            ans += c;
        }
    }
    cout<<ans<<endl;

    return 0;
}
