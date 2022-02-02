#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char s1[3],s2[3],s3[3];
    cin>>t;
    cout<<s1[0]<<" "<<s2[0]<<" "<<s2[1]<<endl;
    while(t--){
        cin>>s1>>s2>>s3;
        cout<<s1[0]<<endl;
        if(s1[0]=='l' && s2[0]=='l' && s2[1]=='l'){
                cout<<"Yes";
        }
        else{
        cout<<"NO"<<endl;}

    }


    return 0;
}
