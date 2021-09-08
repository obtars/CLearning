#include <stdio.h>
int main()
{
    int n;
    printf("Enter your mark");
    scanf("%d",&n);
    if (n>0 && n<100)
    {
        if (n<33)
            printf("F");
        else if (n<=50)
        {
            printf("C");
        }
    }
    else
        printf("You entred a worng nomber");


}
