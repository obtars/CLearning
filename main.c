#include <stdio.h>
#include <stddef.h>

void main(void)
{
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    printf("number address = %p\n",&number);
    printf("number value = %d\n\n", number);

    pnumber=&number;
    printf("pnumber address = %p\n",&pnumber);
    printf("pnumber value = %d\n",*pnumber);
    printf("pnumber size = %d bytes\n",sizeof(pnumber));

    return 0;

}
