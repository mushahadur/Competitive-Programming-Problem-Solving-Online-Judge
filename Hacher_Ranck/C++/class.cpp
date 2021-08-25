#include<bits/stdc++.h>
using namespace std;

class mrk
{
public:
    int age;
    char first[51];
    char last[51];
    int stan;
    string str()
    {
        cout<<",";
    }

};

int main()
{
    mrk pulock;
    cin>>pulock.age;
    cin>>pulock.first;
    cin>>pulock.last;
    cin>>pulock.stan;

    cout<<pulock.age<<endl;
    cout<<pulock.first<<pulock.str()<<" "<<endl;
    cout<<pulock.stan <<endl;
    cout<<endl;
    cout<<pulock.age<<pulock.str() <<pulock.first<<pulock.str() <<pulock.last<<pulock.str() <<pulock.stan <<endl;


    return 0;
}
