#include <stdio.h>

int main()
{
    char x[3][10];
    int i;

    for(i=0;i<3;i++)
    {
        gets(x[i]);
    }

    printf("%s\n",x[0]);
    printf("%s\n",x[1]);
    printf("%s\n",x[2]);

    return 0;
}
