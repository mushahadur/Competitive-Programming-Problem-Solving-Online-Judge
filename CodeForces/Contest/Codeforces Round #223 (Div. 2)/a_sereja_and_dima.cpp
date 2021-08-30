#include<bits/stdc++.h>
using namespace std;
int main()
{
    int item,i;
    cin>>item;
    vector<int>v(item);
    for(i=0; i<item; i++)cin>>v[i];

    int sereja=0, dima=0, f1=1;

    while(!v.empty()){
        if(f1==1)
        {
            if(v[0]>v.back()){
                sereja = sereja+v[0];
                v.erase(v.begin());
            }
            else{
                sereja+=v.back();
                v.pop_back();
            }
            f1=2;
        }
        else{
           if(v[0]>v.back()){
                dima+=v[0];
                v.erase(v.begin());
            }
            else{
                dima+=v.back();
                v.pop_back();
            }
            f1=1;
        }
    }
    cout<<sereja<<"  "<<dima<<endl;

    return 0;
}
