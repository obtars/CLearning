#include <stdio.h>
#include <string.h>

int main()
{
    char aArray[100];
    int i;
    printf("Enter a String: ");
    gets(aArray);

    for (i=0;i<strlen(aArray);i++)
    {
        printf("Array[%d] = %c Address Of Array = %p\n",i,aArray[i],&aArray[i]);
    }

    return 0;
}