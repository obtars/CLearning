#include<stdio.h>

int main()
{
    int num,count=0,i;
    printf("Enter The Number: ");
    scanf("%d",&num);

    for (i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("Prime");
    }else
    {
        printf("Not Prime");
    }


    return 0;
}
