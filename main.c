#include <stdio.h>

int main()
{
    int raw, col, n;

    printf("Enter The Value Of N: ");
    scanf("%d",&n);

    for(raw=1;raw<=n;raw++)
    {
        for(col=1;col<=n;col++)
        {
            if(raw==1)
            {
                printf("r");
            }else if (col==1)
            {
                printf("c");
            }
            else{
                printf("0");
            }

        }
        printf("\n");
    }

    return 0;
}
