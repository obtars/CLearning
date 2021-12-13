#include <stdio.h>
#include <string.h>


void removeChar(char * str)
{

    int i, j;
    int len = strlen(str);

    for(i=0; i<len; i++)
    {
        if(str[i] =='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }
}


int main()
{
    int i,j;
    char x[101];
    scanf("%s",&x);

    removeChar(x);

    printf("%s",x);

    return 0;
}
