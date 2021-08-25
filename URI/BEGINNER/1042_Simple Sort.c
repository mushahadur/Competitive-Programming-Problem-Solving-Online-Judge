#include <stdio.h>

int main()
{
    int array[100],c, d, swap;





    for (c = 0; c < 3; c++)
        scanf("%d", &array[c]);

    for (c = 0 ; c < 3- 1; c++)
    {
        for (d = 0 ; d < 3 - c - 1; d++)
        {
            if (array[d] > array[d+1])
            {
                swap       = array[d];
                array[d]   = array[d+1];
                array[d+1] = swap;
            }
        }
    }



    for (c = 0; c < 3; c++)
        printf("%d\n", array[c]);

    return 0;
}
