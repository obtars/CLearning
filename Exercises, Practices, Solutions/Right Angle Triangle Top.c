#include <stdio.h>

int main()
{
    int raw,col,n;
    printf("Enter The Value of N: ");
    scanf("%d",&n);

    for(raw=1; raw<=n; raw++)
    {
        for(col=1; col<=raw; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }


    return 0;
}