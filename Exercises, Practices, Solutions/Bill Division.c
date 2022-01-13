#include <stdio.h>

int main()
{
    int i,n,k,result=0;
    scanf("%d%d",&n,&k);
    int x[n],y;

    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }

    scanf("%d",&y);

    for(i=0; i<n; i++)
    {
        result+=x[i];
    }

    if(((result-x[k])/2)==y)
    {
        printf("Bon Appetit");
    }
    else
    {
        printf("%d",y-((result-x[k])/2));
    }

    return 0;
}
