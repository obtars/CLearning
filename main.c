#include<stdio.h>
#include<string.h>
int main()
{

    char name[] = "";
    char copy[] = "";

    scanf("%s",name);
    scanf("%s",copy);


    if (strcmp(name,copy)==1)
    {
        printf("Boro");
    }else
    {
        printf("Suto");

    }


    return 0;
}
