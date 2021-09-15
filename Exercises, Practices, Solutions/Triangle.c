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
        for(col=1;col<=2*raw-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
