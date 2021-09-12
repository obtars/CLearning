#include <stdio.h>
#include <stddef.h>
int main()
{
    int n = 5;
    int *i = &n;
    int *janina = NULL;

    printf("Value: %d\n",n);
    printf("Value Address: %p\n",&n);
    printf("Pointer: %p\n",i);
    printf("Pointer Value: %d\n",*i);
    printf("Pointer Address: %p\n",&i);

    if(janina)
    {
        printf("Value Ase!");
    }else
    {
        printf("Value Nai!");
    }

    return 0;
}
