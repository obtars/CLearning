#include <stdio.h>

int main()
{
    int x = 5454;
    int *const location = &x;

    location = 4;
    printf("%p\n",location);
    printf("%d",*location);

    return 0;
}
