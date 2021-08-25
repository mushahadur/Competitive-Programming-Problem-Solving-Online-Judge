/// Problems.........

#include<stdio.h>
int main()
{
    char str[111] = "kcolup pulock";
    char str2[111];
    /// strrev(str);

    int i=0,leng=0,j;
    while(str[0] != '\0')
    {
        i++;
        leng++;
    }
    for(j=0,i=leng-1; i>=0; i--,j++)
    {
        str2[j]=str[i];
    }
    str2[j]='\0';
    printf("%s\n",str2);


    return 0;
}

/*
#include<stdio.h>
int main()
{
    char str[111] = "kcolup pulock";
    strrev(str);
    printf("%s\n",str);


    return 0;
}


*/
