#include <stdio.h>

int main() {

    int n,x,i,sum=1;
    printf("Enter Base: ");
    scanf("%d",&n);
    printf("Enter Exponent: ");
    scanf("%d",&x);


    for(i=1;i<=x;i++)
    {
        sum *=n;
    }

    printf("%d^%d=%d",n,x,sum);
    return 0;
}
