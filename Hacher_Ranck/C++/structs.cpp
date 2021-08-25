#include<bits/stdc++.h>
using namespace std;
struct mrk
{
    int age;
    char first[51];
    char last[51];
    int stan;
};
int main()
{
    struct mrk pulock;
    cin>>pulock.age;
    cin>>pulock.first;
    cin>>pulock.last;
    cin>>pulock.stan;
    cout<<pulock.age<<" " <<pulock.first<<" " <<pulock.last<<" " <<pulock.stan <<endl;

    return 0;
}
