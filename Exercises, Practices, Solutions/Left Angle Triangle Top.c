#include <stdio.h>

int main()
{
    int raw, col, n;

    printf("Enter The Value Of N: ");
    scanf("%d",&n);

    for(raw=1;raw<=n;raw++)
    {
        for(col=1;col<=n-raw;col++)
        {
            printf(" ");
        }
        for(col=1;col<=raw;col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
