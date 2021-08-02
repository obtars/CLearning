#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(i%n==0)
        {
            printf("prime");
        }else
        {
            printf("Hello World");
        }
    }

    return 0;
}
