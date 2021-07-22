#include <stdio.h>

int main(void) {

    int i;
    i = lanth("Tawhid");
    printf("%d",i);
    return 0;
}

lanth(char w[])
{
    int j;
    int i;
    for(i=0;w[i]!='/0';i++)
    {
        j++;
    }

    return j;
}
