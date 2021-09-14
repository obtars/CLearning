#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter The Value of N: ");
    scanf("%d",&n);

    if(n==2)
    {
        printf("Prime");
    }else if (n==1)
    {
        printf("Not Prime");
    }
    else{

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Not Prime");
            break;
        }else
        {
            printf("Prime");
            break;
        }
    }
}
    return 0;
}
