#include <stdio.h>

int main() {
	int area,length,parimeter,breadth;
	scanf("%d%d",&length,&breadth);
	area = length*breadth;
	parimeter = 2*(length+breadth);
	if(area>parimeter)
    {
        printf("Area\n");
        printf("%d\n",area);
    }
    else if(area<parimeter)
    {
        printf("Peri\n");
        printf("%d\n",parimeter);
    }
    else
    {
        printf("Eq\n");
        printf("%d\n",parimeter);
    }

	return 0;
}

