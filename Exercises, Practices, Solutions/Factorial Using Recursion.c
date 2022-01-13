#include <stdio.h>

int fact(int x)
{
    int sum=0;
    if(x==1)
    {
        return 1;
    }else
    {
        sum+=x*fact(x-1);
    }

    return sum;
}

int main()
{
    int result,n;
    scanf("%d",&n);

    printf("%d",fact(5));

    return 0;
}
