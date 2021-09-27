#include <stdio.h>
int main()
{
    int i,l,r;
    scanf("%d%d",&l,&r);
    for (i=l;i<=r;i++) {
        if(i%2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
