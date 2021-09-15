#include <stdio.h>

int main()
{
    int raw, col, n;

    printf("Enter The Value Of N: ");
    scanf("%d",&n);

    for(raw=0;raw<n;raw++)
    {
        for(col=1;col<raw;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }

    for(raw=n;raw>1;raw--)
    {
        for(col=1;col<raw;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }

    return 0;
}
