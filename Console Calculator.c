/*
Simple Console Calculator
Author: Tawhid Monowar
*/

#include <stdio.h>
int main()
{
    int n,x,y,z;
    float d;

    printf("This is Simple Console Calculator, Author: Tawhid Monowar\n");
    printf("\nPress 1 for Summation.\nPress 2 for Subtraction.\nPress 3 for Multiplication.\nPress 4 for Division.\n");
    scanf("%d",&x);

    if(x==1)
    {
        printf("Enter The First Number: ");
        scanf("%d",&y);
        printf("Enter The Second Number: ");
        scanf("%d",&z);
        n = y+z;
        printf("The Answer is: %d", n);

    } else if (x==2)
    {
        printf("Enter The First Number: ");
        scanf("%d",&y);
        printf("Enter The Second Number: ");
        scanf("%d",&z);
        n = y-z;
        printf("The Answer is: %d", n);

    } else if (x==3)
    {
        printf("Enter The First Number: ");
        scanf("%d",&y);
        printf("Enter The Second Number: ");
        scanf("%d",&z);
        n = y*z;
        printf("The Answer is: %d", n);

    } else if (x==4)
    {
        printf("Enter The First Number: ");
        scanf("%d",&y);
        printf("Enter The Second Number: ");
        scanf("%d",&z);
        d = (float)y/z;
        printf("The Answer is: %.5f", d);

    } else
    {
        printf("You Entered a Wrong Number! Try Again");
    }

    return 0;
}
