#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    scanf("%d . %d",&x,&y);
    if(x>=1 && x<=15)
    {
        if(0<=y && y<=2)
        {
            printf("%d-",x);
        }
        else if(3<=y && y<=6)
        {
            printf("%d",x);
        }
        else if(7<=y && y<=9)
        {
            printf("%d+",x);
        }
    }
    return 0;
}
