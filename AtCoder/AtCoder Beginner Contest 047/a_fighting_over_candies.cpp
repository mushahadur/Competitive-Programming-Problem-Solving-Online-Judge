                                /// Wrong Answer

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,temp;
    cin>>a>>b>>c;
    if((a<=100 && a>=1) && (b<=100 && b>=1) && (c<=100 && c>=1)  ){
    if(a>b && a>c){
             temp = a+b+c;
    temp = temp/2;
        if(a == temp) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else if(b>a && b>c){
            temp = a+b+c;
    temp = temp/2;
        if(b == temp) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else if(c>a && c>b){
        temp = a+b+c;
    temp = temp/2;
        if(c == temp) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    }


    return 0;
}
