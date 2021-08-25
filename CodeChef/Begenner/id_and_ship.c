#include<stdio.h>
int main()
{
    char s;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%*c");
        scanf("%c",&s);
        if(s == 'b' || s=='B')
        {
            printf("BattleShip\n");
        }
        else if(s == 'c' || s=='C')
        {
            printf("Cruiser\n");
        }
        else  if(s == 'd' || s=='D')
        {
            printf("Destroyer\n");
        }

        else if(s == 'f' || s=='F')
        {
            printf("Frigate\n");
        }
    }
    return 0;
}
